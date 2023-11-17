#include<bits/stdc++.h>
using namespace std;

int n;
char graph[2001][2001];
bool visited[2001][2001];
int start_y, start_x;
int result;
int dx[7] = {1, 0, -1, 1, 1, -1, -1};
int dy[7] = {0, -1, 0, 1, -1, 1, -1};

bool isIn(int y, int x){
    if(y < 0 || y >= n || x < 0 || x >= n) return false;
    return true;
}

void bfs(int start_y, int start_x){
    queue<pair<int, int>> q;

    q.push(make_pair(start_y, start_x));
    visited[start_y][start_x] = true;

    while(!q.empty()){
        auto cor = q.front(); q.pop();
        int y = cor.first;
        int x = cor.second;

        for(int i = 0; i < 7; i++){
            int new_y = y + dy[i];
            int new_x = x + dx[i];

            if(isIn(new_y, new_x) && !visited[new_y][new_x] && graph[new_y][new_x] == '.'){
                q.push(make_pair(new_y, new_x));
                visited[new_y][new_x] = true;
                result++;
            }
        }
    }
}

int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);

    memset(graph, 0, sizeof(graph));
    memset(visited, 0, sizeof(visited));

    cin >> n;
    for(int i = 0; i < n; i++){
        string input;
        cin >> input;
        for(int j = 0; j < n; j++){
            if(input[j] == 'F'){
                start_x = j;
                start_y = i;
            }
            graph[i][j] = input[j];
        }
    }

    bfs(start_y, start_x);

    cout << result;

    return 0;
}