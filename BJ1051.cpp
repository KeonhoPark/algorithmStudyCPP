#include<bits/stdc++.h>
using namespace std;

int row, col;
int graph[51][51];
int result = 1;

int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);

    cin >> row >> col;

    for(int i = 0; i < row; i++){
        string input;
        cin >> input;
        for(int j = 0; j < input.size(); j++){
            graph[i][j] = input[j] - '0';
        }
    }

    int mn = min(row, col);

    for(int k = 1; k <= mn; k++){
        for(int i = 0; i < row - k; i++){
            for(int j = 0; j < col - k; j++){
                if(graph[i][j] == graph[i][j + k] && graph[i][j] == graph[i + k][j] && graph[i][j] == graph[i + k][j + k]){
                    result = max(result, (k + 1) * (k + 1));
                }
            }
        }
    }

    cout << result;

    return 0;
}