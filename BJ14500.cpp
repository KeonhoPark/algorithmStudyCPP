#include<bits/stdc++.h>
using namespace std;

int n, m;
int graph[500][500];
bool visited[500][500];
int mx = 0;

int dx[4] = {0, 1, 0, -1};
int dy[4] = {1, 0, -1, 0};

bool isIn(int y, int x){
    if(y < 0 || y >= n || x < 0 || x >= m) return false;
    return true;
}

void dfs(int y, int x, int total, int count){
    visited[y][x] = true;
    if(count == 3){
        if(total > mx) mx = total;
        return;
    }

    for(int i = 0; i < 4; i++){
        int new_y = y + dy[i];
        int new_x = x + dx[i];

        if(isIn(new_y, new_x) && visited[new_y][new_x] == false){
            dfs(new_y, new_x, total + graph[new_y][new_x], count+1);
            visited[new_y][new_x] = false;
        }
    }
}

void up(int y, int x){
    int total = graph[y][x] + graph[y][x+1] + graph[y][x+2] + graph[y-1][x+1];
    if(total > mx) mx = total;
}

void down(int y, int x){
    int total = graph[y][x] + graph[y][x+1] + graph[y][x+2] + graph[y+1][x+1];
    if(total > mx) mx = total;
}

void right(int y, int x){
    int total = graph[y][x] + graph[y+1][x] + graph[y+2][x] + graph[y+1][x+1];
    if(total > mx) mx = total;
}

void left(int y, int x){
    int total = graph[y][x] + graph[y][x+1] + graph[y+1][x+1] + graph[y-1][x+1];
    if(total > mx) mx = total;
}

int main(){
    cin.tie(0);
    cout.tie(0);
    ios::sync_with_stdio(false);

    cin >> n >> m;

    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            cin >> graph[i][j];
        }
    }

    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            memset(visited, 0, sizeof(visited));
            dfs(i, j, graph[i][j], 0);
            if(0 <= i-1 && j+2 < m) up(i, j);
            if(i+1 < n && j+2 < m) down(i, j);
            if(i+2 < n && j+1 < m) right(i, j);
            if(i+1 < n && i-1 >= 0 && j+1 < m) left(i, j);
        }
    }

    cout << mx;

    return 0;
}