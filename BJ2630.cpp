#include<bits/stdc++.h>
using namespace std;

int graph[129][129];
int result[2];

bool isWhole(int size, int col_s, int row_s){
    for(int i = col_s; i < col_s + size; i++){
        for(int j = row_s; j < row_s + size; j++){
            if(graph[col_s][row_s] != graph[i][j]) return false;
        }
    }
    return true;
}

void sol(int n, int col_s, int row_s){
    if(isWhole(n, col_s, row_s)){
        result[graph[col_s][row_s]]++;
        return;
    }

    int new_n = n / 2;
    for(int i = 0; i < 2; i++){
        for(int j = 0; j < 2; j++){
            sol(new_n, col_s + i * new_n, row_s + j * new_n);
        }
    }
}

int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);

    int n;
    cin >> n;

    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            cin >> graph[i][j];
        }
    }

    sol(n, 0, 0);

    for(int i = 0; i < 2; i++) cout << result[i] << "\n";

    return 0;
}