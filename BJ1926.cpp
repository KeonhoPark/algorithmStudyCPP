#include<bits/stdc++.h>
using namespace std;
#define col first
#define row second

int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);

    int colSize, rowSize;
    cin >> colSize >> rowSize;

    int graph[colSize][rowSize];
    int visited[colSize][rowSize];
    fill(&visited[0][0], &visited[colSize][rowSize-1], 0);

    int cnt = 0;
    set<int, greater<int>> sizeSet;
    int dx[4] = {0, 1, 0, -1};
    int dy[4] = {1, 0, -1, 0};

    for(int i = 0; i < colSize; i++){
        for(int j = 0; j < rowSize; j++){
            cin >> graph[i][j];
        }
    }

    for(int i = 0; i < colSize; i++){
        for(int j = 0; j < rowSize; j++){
            if(graph[i][j] == 1 && visited[i][j] == 0){
                queue<pair<int, int>> q;
                int size = 1;
                visited[i][j] = 1;
                q.push(make_pair(i, j));
                while(!q.empty()){
                    pair<int, int> curPos = q.front();
                    q.pop();
                    for(int k = 0; k < 4; k++){
                        int newCol = curPos.col + dy[k];
                        int newRow = curPos.row + dx[k];
                        if(!(0 <= newCol && newCol < colSize && 0 <= newRow && newRow < rowSize)) continue;
                        if(visited[newCol][newRow] == 1 || graph[newCol][newRow] == 0) continue;
                        size++;
                        visited[newCol][newRow] = 1;
                        q.push(make_pair(newCol, newRow));
                    }
                }
                cnt++;
                sizeSet.insert(size);
            }
        }
    }

    cout << cnt << "\n";
    if(cnt == 0) cout << 0;
    else cout << *(sizeSet.begin());

    return 0;
}