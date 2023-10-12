#include<bits/stdc++.h>
using namespace std;

int graph[5][5];
int answers[26];

int countBingo(){
    int result = 0;

    for(int i = 0; i < 5; i++){
        int row = 0;
        int col = 0;
        for(int j = 0; j < 5; j++){
            row += graph[i][j];
            col += graph[j][i];
        }
        if(row == 0) result++;
        if(col == 0) result++;
    }

    int left = 0;
    int right = 0;
    for(int i = 0; i < 5; i++){
        right += graph[i][i];
        left += graph[i][4-i];
    }

    if(right == 0) result++;
    if(left == 0) result++;

    return result;
}

int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);

    for(int i = 0; i < 5; i++){
        for(int j = 0; j < 5; j++){
            cin >> graph[i][j];
        }
    }

    for(int a = 1; a <= 25; a++){
        cin >> answers[a];
    }
        
    for(int a = 1; a <= 25; a++){
        for(int i = 0; i < 5; i++){
            int flag = 0;
            for(int j = 0; j < 5; j++){
                if(graph[i][j] == answers[a]){
                    graph[i][j] = 0;
                    flag = 1;
                    break;
                }
            }
            if(flag == 1) break;
        }

        if(countBingo() >= 3){
            cout << a << "\n";
            break;
        }
    }

    return 0;
}