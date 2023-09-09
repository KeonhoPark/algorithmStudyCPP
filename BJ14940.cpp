#include<bits/stdc++.h>
using namespace std;

int n, m;
int graph[1001][1001];
int result[1001][1001];
int pos_x, pos_y;
int dx[4] = {0, 1, 0, -1};
int dy[4] = {-1, 0, 1, 0};

bool isIn(int y, int x){
    if(y < 0 || y >= n || x < 0 || x >= m) return false;
    return true;
}

void bfs(int pos_y, int pos_x){
    queue<pair<int, int>> q;
    q.push(make_pair(pos_y, pos_x));
    result[pos_y][pos_x] = 0;

    while(!q.empty()){
        auto cor = q.front();
        q.pop();
        int cur_y = cor.first;
        int cur_x = cor.second;

        for(int i = 0; i < 4; i++){
            int new_y = cur_y + dy[i];
            int new_x = cur_x + dx[i];
            if(isIn(new_y, new_x) && graph[new_y][new_x] != 0 && result[new_y][new_x] == -1){
                q.push(make_pair(new_y, new_x));
                result[new_y][new_x] = result[cur_y][cur_x] + 1;
            }
            else if(isIn(new_y, new_x) && graph[new_y][new_x] == 0) result[new_y][new_x] = 0;
        }
    }
}

int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);

    cin >> n >> m;

    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            result[i][j] = -1;
            cin >> graph[i][j];
            if(graph[i][j] == 2){
                pos_y = i;
                pos_x = j;
            }
            if(graph[i][j] == 0){
                result[i][j] = 0;
            }
        }
    }

    bfs(pos_y, pos_x);

    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            cout << result[i][j] << " ";
        }
        cout << "\n";
    }

    return 0;
}