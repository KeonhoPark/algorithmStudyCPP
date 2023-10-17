#include<bits/stdc++.h>
using namespace std;

int col, row;
int graph[1001][1001];
int number;
int dy[4] = {-1, 0, 1, 0};
int dx[4] = {0, 1, 0, -1};
int result_col, result_row;

bool isIn(int y, int x){
    if(y < 1 || y > col || x < 1 || x > row) return false;
    return true;
}

void draw(int y, int x, int index){
    int dir = 0;

    while(index != number){
        int new_y = y + dy[dir];
        int new_x = x + dx[dir];

        if(isIn(new_y, new_x) && graph[new_y][new_x] == 0){
            graph[new_y][new_x] = ++index;
            y = new_y;
            x = new_x;
        }
        else dir = (dir + 1) % 4;
    }
}

int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);

    for(int i = 1; i <= 1000; i++){
        for(int j = 1; j <= 1000; j++){
            graph[i][j] = 0;
        }
    }

    cin >> row >> col;
    cin >> number;

    if(number > col * row){
        cout << 0;
        return 0;
    }

    graph[col][1] = 1;
    draw(col, 1, 1);

    for(int i = 1; i <= col; i++){
        for(int j = 1; j <= row; j++){
            if(graph[i][j] == number) cout << j << " " << col - i + 1;
        }
    }

    return 0;
}
