#include<bits/stdc++.h>
using namespace std;

int graph[3000][3000];
int result[3] = {0};

bool isWhole(int size, int col_s, int row_s){
    int start = graph[col_s][row_s];

    for(int i = col_s; i < col_s + size; i++){
        for(int j = row_s; j < row_s + size; j++){
            if(graph[i][j] != start) return false;
        }
    }
    return true;
}

void sol(int n, int col_s, int row_s){
    if(isWhole(n, col_s, row_s)){
        result[graph[col_s][row_s] + 1]++;
        return;
    }
    else{
        int new_n = n / 3;
        for(int i = 0; i < 3; i++){
            for(int j = 0; j < 3; j++){
                sol(new_n, col_s + i * new_n, row_s + j * new_n);
            }
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

    for(int i = 0; i < 3; i++) cout << result[i] << "\n";

    return 0;
}