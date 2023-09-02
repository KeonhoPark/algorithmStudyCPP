#include<bits/stdc++.h>
using namespace std;

int r, c;
char graph[1001][1001];
char visited_f[1001][1001];
char visited_j[1001][1001];
int f_time, j_time;
int j_row, j_col, f_row, f_col;
int dx[] = {1, 0, -1, 0};
int dy[] = {0, 1, 0, -1};

bool isIn(int col, int row){
    if(col < 0 || col >= r || row < 0 || row >= c) return false;
    return true;
}

void bfs(int col, int row, char visited[1001][1001], int time){
    queue<pair<int, int>> q;
    q.push(make_pair(col, row));
    visited[col][row] = 1;
    while(!q.empty()){
        auto cor = q.front();
        q.pop();
        for(int i = 0; i < 4; i++){
            int new_col = cor.first;
            int new_row = cor.second;

            if(isIn(new_col, new_row) && graph[new_col][new_row] != '#' && visited[new_col][new_row] == 0){
                q.push(make_pair(new_col, new_row));
                visited[new_col][new_row] = 1;
            }
        }
        time++;
    }
}

int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);

    cin >> r >> c;

    for(int i = 0; i < r; i++){
        for(int j = 0; j < c; j++){
            visited_f[i][j] = 0;
            visited_j[i][j] = 0;
        }
    }

    for(int i = 0; i < r; i++){
        string input;
        cin >> input;

        for(int j = 0; j < c; j++){
            if(input[j] == 'J'){
                j_col = i;
                j_row = j;
            }
            else if(input[j] == 'F'){
                f_col = i;
                f_row = j;
            }
            graph[i][j] = input[j];
        }
    }

    bfs(j_col, j_row, visited_j, j_time);
    bfs(f_col, f_row, visited_f, f_time);

    cout << j_time << f_time;
    
    return 0;
}