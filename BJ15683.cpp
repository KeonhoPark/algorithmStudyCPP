#include<bits/stdc++.h>
using namespace std;

int graph1[10][10];
int graph2[10][10];
vector<pair<int, int>> cameras;
int h, w;
int mn = 100;

int dx[4] = {0, 1, 0, -1};
int dy[4] = {-1, 0, 1, 0};

bool isValid(int col, int row){
    if(col < 0 || col >= h || row < 0 || row >= w) return false;
    return true;
}

void go(int col, int row, int dir){
    dir %= 4;
    while(true){
        col += dy[dir];
        row += dx[dir];
        if(!isValid(col, row) || graph2[col][row] == 6) return;
        if(graph2[col][row] != 0) continue;
        graph2[col][row] = -1;
    }
}

int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);

    cin >> h >> w;
    for(int i = 0; i < h; i++){
        for(int j = 0; j < w; j++){
            cin >> graph1[i][j];
            if(graph1[i][j] != 0 && graph1[i][j] != 6) cameras.push_back(make_pair(i, j));
        }
    }

    for(int c = 0; c < (1 << (2 * cameras.size())); c++){
        for(int i = 0; i < h; i++){
            for(int j = 0; j < w; j++){
                graph2[i][j] = graph1[i][j];
            }
        }

        int dirs = c;
        for(int i = 0; i < cameras.size(); i++){
            int col = cameras[i].first;
            int row = cameras[i].second;

            int cur_dir = dirs % 4;
            dirs /= 4;

            if(graph1[col][row] == 1){
                go(col, row, cur_dir);
            }
            else if(graph1[col][row] == 2){
                go(col, row, cur_dir);
                go(col, row, cur_dir+2);
            }
            else if(graph1[col][row] == 3){
                go(col, row, cur_dir);
                go(col, row, cur_dir+1);
            }
            else if(graph1[col][row] == 4){
                go(col, row, cur_dir);
                go(col, row, cur_dir+1);
                go(col, row, cur_dir+2);
            }
            else if(graph1[col][row] == 5){
                go(col, row, cur_dir);
                go(col, row, cur_dir+1);
                go(col, row, cur_dir+2);
                go(col, row, cur_dir+3);
            }
        }

        int cnt = 0;
        for(int i = 0; i < h; i++){
            for(int j = 0; j < w; j++){
                if(graph2[i][j] == 0) cnt++;
            }
        }
        mn = min(mn, cnt);
    }
    cout << mn;
    return 0;
}