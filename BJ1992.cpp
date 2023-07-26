#include<bits/stdc++.h>
using namespace std;

int graph[65][65];
int n;

bool isWhole(int size, int col_s, int row_s){
    for(int i = col_s; i < col_s + size; i++){
        for(int j = row_s; j < row_s + size; j++){
            if(graph[col_s][row_s] != graph[i][j]) return false;
        }
    }
    return true;
}

void sol(int root, int col_s, int row_s){
    if(isWhole(root, col_s, row_s)){
        cout << graph[col_s][row_s];
    }

    else{
         cout << "(";
        int new_n = root / 2;
        for(int i = 0; i < 2; i++){
            for(int j = 0; j < 2; j++){
                sol(new_n, col_s + new_n * i, row_s + new_n * j);
            }
        }
        cout << ")";
    }

}

int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);

    cin >> n;

    for(int i = 0; i < n; i++){
        string input;
        cin >> input;
        for(int j = 0; j < n; j++){
            graph[i][j] = input[j] - '0';
        }
    }

    sol(n, 0, 0);

    return 0;
}