#include<bits/stdc++.h>
using namespace std;

int n, number;
int graph[1000][1000];

int dx[4] = {0, 1, 0, -1};
int dy[4] = {1, 0, -1, 0};

int result_col;
int result_row;

bool isIn(int y, int x){
    if(y < 0 || y >= n || x < 0 || x >= n) return false;
    return true;
}

int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);

    memset(graph, 0, sizeof(graph));

    cin >> n >> number;

    int dir = 0;
    int y = 0;
    int x = 0;
    graph[y][x] = n*n;

    for(int i = n*n-1; i >= 1; i--){
        int new_y = y + dy[dir];
        int new_x = x + dx[dir];

        if(isIn(new_y, new_x) && graph[new_y][new_x] == 0){
            y = new_y;
            x = new_x;
            graph[new_y][new_x] = i;
        }
        
        else{
            if(dir == 3) dir = 0;
            else dir++;

            new_y = y + dy[dir];
            new_x = x + dx[dir];
            y = new_y;
            x = new_x;

            graph[new_y][new_x] = i;
        }
    }

    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            if(graph[i][j] == number){
                result_col = i + 1;
                result_row = j + 1;
            }
            cout << graph[i][j] << " ";
        }
        cout << "\n";
    }

    cout << result_col << " " << result_row;

    return 0;
}