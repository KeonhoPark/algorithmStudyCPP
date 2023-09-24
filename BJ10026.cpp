#include<bits/stdc++.h>
using namespace std;

int n;
char normal[101][101];
char abnormal[101][101];
int normalCount;
int abnormalCount;

bool isIn(int y, int x){
    if(y < 0 || y >= n || x < 0 || x >= n) return false;
    return true;
}

void clustering(int y, int x, char color, int flag){
    int dx[4] = {0, 1, 0, -1};
    int dy[4] = {-1, 0, 1, 0};
    queue<pair<int, int>> q;

    q.push(make_pair(y, x));
    if(flag == 0) normal[y][x] = 'V';
    else abnormal[y][x] = 'V';
    

    while(!q.empty()){
        auto cor = q.front(); q.pop();

        for(int i = 0; i < 4; i++){
            int new_y = cor.first + dy[i];
            int new_x = cor.second + dx[i];

            if(flag == 0){
                if(isIn(new_y, new_x) && normal[new_y][new_x] == color){
                    q.push(make_pair(new_y, new_x));
                    normal[new_y][new_x] = 'V';
                }
            }
            else{
                if(isIn(new_y, new_x) && abnormal[new_y][new_x] == color){
                    q.push(make_pair(new_y, new_x));
                    abnormal[new_y][new_x] = 'V';
                }
            }
        }
    }

    if(flag == 0) normalCount++;
    else abnormalCount++;
}

int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);

    cin >> n;
    for(int i = 0; i < n; i++){
        string input;
        cin >> input;
        for(int j = 0; j < input.size(); j++){
            normal[i][j] = input[j];
            if(input[j] == 'R') abnormal[i][j] = 'G';
            else abnormal[i][j] = input[j];
        }
    }

    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            if(normal[i][j] != 'V') clustering(i, j, normal[i][j], 0);
        }
    }

    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            if(abnormal[i][j] != 'V') clustering(i, j, abnormal[i][j], 1);
        }
    }

    cout << normalCount << " " << abnormalCount;

    return 0;
}