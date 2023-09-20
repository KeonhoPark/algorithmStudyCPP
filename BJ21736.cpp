#include<bits/stdc++.h>
using namespace std;

char graph[601][601];
int n, m;
int start_y, start_x;
int result;

bool isIn(int y, int x){
    if(y < 0 || y >= n || x < 0 || x >= m) return false;
    return true;
}

void bfs(int start_y, int start_x){
    queue<pair<int, int>> q;
    int dx[4] = {0, 1, 0, -1};
    int dy[4] = {1, 0, -1, 0};

    q.push(make_pair(start_y, start_x));
    graph[start_y][start_x] = 'V';

    while(!q.empty()){
        auto cor = q.front(); q.pop();
        int cur_y = cor.first;
        int cur_x = cor.second;

        for(int i = 0; i < 4; i++){
            int new_y = cur_y + dy[i];
            int new_x = cur_x + dx[i];

            if(isIn(new_y, new_x) && graph[new_y][new_x] != 'V' && graph[new_y][new_x] != 'X'){
                if(graph[new_y][new_x] == 'P') result++;
                q.push(make_pair(new_y, new_x));
                graph[new_y][new_x] = 'V';
            }
        }
    }
}

int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);

    cin >> n >> m;
    
    for(int i = 0; i < n; i++){
        string input;
        cin >> input;
        for(int j = 0; j < input.size(); j++){
            graph[i][j] = input[j];
            if(input[j] == 'I'){
                start_y = i;
                start_x = j;
            }
        }
    }

    bfs(start_y, start_x);

    if(result == 0) cout << "TT";
    else cout << result;

    return 0;
}