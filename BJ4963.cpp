#include<bits/stdc++.h>
using namespace std;

int w = -1;
int h = -1;
int graph[51][51];
int visited[51][51];
int dx[8] = {1, 1, 0, -1, -1, -1, 0, 1};
int dy[8] = {0, 1, 1, 1, 0, -1, -1, -1};
queue<pair<int, int>> q;

bool isInGraph(int y, int x){
    if(y < 0 || y >= h || x < 0 || x >= w) return false;
    return true;
}

void bfs(){
    while(!q.empty()){
        auto c = q.front();
        q.pop();
        for(int k = 0; k < 8; k++){
            int new_y = c.first + dy[k];
            int new_x = c.second + dx[k];
            if(isInGraph(new_y, new_x) && graph[new_y][new_x] == 1 && visited[new_y][new_x] == 0){
                visited[new_y][new_x] = 1;
                q.push(make_pair(new_y, new_x));
            }
        }
    }
}

int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);

    while(true){
        cin >> w >> h;
        if(w == 0 && h == 0) break;
        fill(&graph[0][0], &graph[h-1][w], 0);
        fill(&visited[0][0], &visited[h-1][w], 0);
        int cnt = 0;

        for(int i = 0; i < h; i++){
            for(int j = 0; j < w; j++){
                cin >> graph[i][j];
            }
        }

        for(int i = 0; i < h; i++){
            for(int j = 0; j < w; j++){
                if(graph[i][j] == 0 || visited[i][j] == 1) continue;
                visited[i][j] = 1;
                q.push(make_pair(i, j));
                bfs();
                cnt++;
            }
        }

        cout << cnt << "\n";
        fill(&visited[0][0], &visited[h-1][w], 0);
        // for(int i = 0; i < h; i++){
        //     for(int j = 0; j < w; j++){
        //         visited[i][j] = 0;
        //     }
        // }
    }
    return 0;
}