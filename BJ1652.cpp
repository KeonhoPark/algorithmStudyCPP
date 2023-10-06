#include<bits/stdc++.h>
using namespace std;

char graph[101][101];
int n;
int row, col;

void count_row(){
    for(int i = 0; i < n; i++){
        int cnt = 0;
        for(int j = 0; j <= n; j++){
            if(j == n){
                if(cnt >= 2) row++;
                break;
            }
            if(graph[i][j] == '.'){
                cnt++;
                continue;
            }
            if(graph[i][j] == 'X'){
                if(cnt >= 2) row++;
                cnt = 0;
            }
        }
    }
}

void count_col(){
    for(int i = 0; i < n; i++){
        int cnt = 0;
        for(int j = 0; j <= n; j++){
            if(j == n){
                if(cnt >= 2) col++;
                break;
            }
            if(graph[j][i] == '.'){
                cnt++;
                continue;
            }
            if(graph[j][i] == 'X' || j == n-1){
                if(cnt >= 2) col++;
                cnt = 0;
            }
        }
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
            graph[i][j] = input[j];
        }
    }

    count_row();
    count_col();

    cout << row << " " << col;




    // for(int i = 0; i < n; i++){
    //     for(int j = 0; j < n; j++){
    //         cout << graph[i][j] << " ";
    //     }
    //     cout << "\n";
    // }

    return 0;
}