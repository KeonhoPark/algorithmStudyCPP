#include<bits/stdc++.h>
using namespace std;

int m[20][20] = {0};
bool visited[20][20][4];
int dx[] = {1, 1, 0, -1};
int dy[] = {0, 1, 1, 1};
vector<pair<int, int>> pos;

bool checkRange(int col, int row){
    if(1 <= col && col <= 19 && 1 <= row && row <= 19){
        return true;
    }
    return false;
}

int checkNext(int col, int row, int direction, int color, int count){
    visited[col][row][direction] = true;
    pos.push_back(make_pair(col, row));

    int new_col = col + dy[direction];
    int new_row = row + dx[direction];

    if(!checkRange(new_col, new_row) || m[new_col][new_row] != color) return count;

    return checkNext(new_col, new_row, direction, color, count+1);
}

bool cmp(pair<int, int> a, pair<int, int> b){
    if(a.second >= b.second){
        if(a.second == b.second){
            if(a.first > b.first) return false;
            else return true;
        }
        else return false;
    }   
    else return true;
}


int main(){
    for(int i = 1; i < 20; i++){
        for(int j = 1; j < 20; j++){
            cin >> m[i][j];
        }
    }

    for(int i = 1; i < 20; i++){
        for(int j = 1; j < 20; j++){
            if(m[i][j] == 0) continue;
            for(int d = 0; d < 4; d++){
                int new_col = i + dy[d];
                int new_row = j + dx[d];
                if(!checkRange(new_col, new_row)) continue;
                if(m[i][j] == m[new_col][new_row] && !visited[i][j][d]){
                    pos.clear();
                    visited[i][j][d] = true;
                    pos.push_back(make_pair(i, j));
                    if(checkNext(new_col, new_row, d, m[i][j], 2) == 5){
                        sort(pos.begin(), pos.end(), cmp);
                        cout << m[i][j] << "\n";
                        cout << pos[0].first << " " << pos[0].second;
                        return 0;
                    }
                }
            }
        }
    }
    cout << 0;
    return 0;
}