#include<bits/stdc++.h>
using namespace std;

int n, e;
int graph[1001][1001];
int visited[1001];
int cnt = 0;

void bfs(int start){
    queue<int> q;
    visited[start] = 1;
    q.push(start);

    while(!q.empty()){
        int p = q.front();
        q.pop();
        for(int k = 1; k <= n; k++){
            if(graph[p][k] == 1 && visited[k] == 0){
                visited[k] = 1;
                q.push(k);
            }
        }
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

    cin >> n >> e;

    for(int i = 0; i < e; i++){
        int start, end;
        cin >> start >> end;
        graph[start][end] = 1;
        graph[end][start] = 1;
    }

    for(int i = 1; i <= n; i++){
        if(visited[i] == 0){
            bfs(i);
            cnt++;
        }
    }

    cout << cnt;

    return 0;
}