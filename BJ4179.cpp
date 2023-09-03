#include<bits/stdc++.h>
using namespace std;

int r, c;
char graph[1001][1001];
int visited_f[1001][1001];
int visited_j[1001][1001];
int j_row, j_col;
int result = -1;
vector<pair<int, int>> f_points;
int dx[] = {1, 0, -1, 0};
int dy[] = {0, 1, 0, -1};

bool isIn(int col, int row){
    if(col < 0 || col >= r || row < 0 || row >= c) return false;
    return true;
}

void f_bfs(vector<pair<int, int>> points){
    queue<pair<int, int>> q;
    for(auto p : points) {
        q.push(make_pair(p.first, p.second));
        visited_f[p.first][p.second] = 1;
    }

    while(!q.empty()){
        auto cor = q.front();
        q.pop();
        for(int i = 0; i < 4; i++){
            int new_col = cor.first + dy[i];
            int new_row = cor.second + dx[i];

            if(isIn(new_col, new_row) && graph[new_col][new_row] != '#' && visited_f[new_col][new_row] == 0){
                q.push(make_pair(new_col, new_row));
                visited_f[new_col][new_row] = visited_f[cor.first][cor.second] + 1;
            }
        }
    }
}

int j_bfs(int col, int row){
    queue<pair<int, int>> q;
    q.push(make_pair(col, row));
    visited_j[col][row] = 1;
    while(!q.empty()){
        auto cor = q.front();
        q.pop();
        for(int i = 0; i < 4; i++){
            int new_col = cor.first + dy[i];
            int new_row = cor.second + dx[i];

            if(!isIn(new_col, new_row)) return visited_j[cor.first][cor.second];
            if(visited_f[new_col][new_row] != 0 && (visited_j[cor.first][cor.second] + 1 >= visited_f[new_col][new_row])) continue;
            if(graph[new_col][new_row] != '#' && visited_j[new_col][new_row] == 0){
                q.push(make_pair(new_col, new_row));
                visited_j[new_col][new_row] = visited_j[cor.first][cor.second] + 1;
            }
        }
    }

    return -1;
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
                f_points.push_back(make_pair(i, j));
            }
            graph[i][j] = input[j];
        }
    }

    f_bfs(f_points);
    result = j_bfs(j_col, j_row);

    if(result != -1) cout << result;
    else cout << "IMPOSSIBLE";
    
    return 0;
}