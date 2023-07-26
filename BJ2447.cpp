#include<bits/stdc++.h>
using namespace std;

int n;
char graph[2200][2200];

void sol(int root, int col_s, int row_s){
    if(root == 1){
        graph[col_s][row_s] = '*';
        return;
    }

    else{
        for(int i = 0; i < 3; i++){
            for(int j = 0; j < 3; j++){
                if(i == 1 && j == 1) continue;
                int new_root = root / 3;
                sol(new_root, col_s + new_root * i, row_s + new_root * j);
            }
        }
    }
}

int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);

    cin >> n;
    for(int i = 0; i < n; i++){
        fill(graph[i], graph[i] + n, ' ');
    }

    sol(n, 0, 0);

    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            cout << graph[i][j];
        }
        cout << "\n";
    }

    return 0;
}