#include<bits/stdc++.h>
using namespace std;

char graph[50][50];
int cnt[50][50];
int w, h;
int dx[4] = {0, 1, 0, -1};
int dy[4] = {1, 0, -1, 0};
vector<int> result;

bool isIn(int col, int row){
    if(col < 0 || col >= h || row < 0 || row >= w) return false;
    return true;
}

void bfs(int col, int row){
    queue<pair<int, int>> q;
    cnt[col][row] = 0;
    q.push(make_pair(col, row));

    while(!q.empty()){
        auto c = q.front();
        int cur_col = c.first;
        int cur_row = c.second;
        q.pop();
        int blocked_cnt = 0;
        for(int i = 0; i < 4; i++){
            int new_col = cur_col + dy[i];
            int new_row = cur_row + dx[i];
            if(!isIn(new_col, new_row) || graph[new_col][new_row] == 'W' || cnt[new_col][new_row] != -1){
                continue;
            } 
            cnt[new_col][new_row] = cnt[cur_col][cur_row] + 1;
            q.push(make_pair(new_col, new_row));
        }
    }

    int mx = -10;
    for(int i = 0; i < h; i++){
        for(int j = 0; j < w; j++){
            if(mx < cnt[i][j]) mx = cnt[i][j];
        }
    }
    result.push_back(mx);
}

int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);

    cin >> h >> w;
    cin.ignore();
    fill(&graph[0][0], &graph[h-1][w], 0);

    for(int i = 0; i < h; i++){
        string input;
        getline(cin, input); 
        for(int j = 0; j < input.size(); j++){
            graph[i][j] = input[j];
        }
    }

    for(int i = 0; i < h; i++){
        for(int j = 0; j < w; j++){
            fill(&cnt[0][0], &cnt[h-1][w], -1);
            if(graph[i][j] == 'L') bfs(i, j);
        }
    }
    
    sort(result.begin(), result.end(), greater<int>());
    cout << result[0];

    return 0;
}