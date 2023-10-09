#include<bits/stdc++.h>
using namespace std;

int col, row;
int graph[501][501];
int dp[501][501];
int dx[4] = {1, 0, -1, 0};
int dy[4] = {0, 1, 0, -1};

bool isIn(int y, int x){
    if(y < 0 || y >= col || x < 0 || x >= row) return false;
    return true;
}

int dfs(int y, int x){
    if(y == col - 1 && x == row - 1) return 1;
    if(dp[y][x] != -1) return dp[y][x];

    dp[y][x] = 0;
    for(int i = 0; i < 4; i++){
        int new_y = y + dy[i];
        int new_x = x + dx[i];

        if(isIn(new_y, new_x) && graph[new_y][new_x] < graph[y][x]){
            dp[y][x] += dfs(new_y, new_x);
        }
    }

    return dp[y][x];
}

int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);

    cin >> col >> row;
    for(int i = 0; i < col; i++){
        for(int j = 0; j < row; j++){
            cin >> graph[i][j];
            dp[i][j] = -1;
        }
    }

    cout << dfs(0, 0) << "\n";

    for(int i = 0; i < col; i++){
        for(int j = 0; j < row; j++){
            cout << dp[i][j] << " ";
        }
        cout << "\n";
    }

    return 0;
}