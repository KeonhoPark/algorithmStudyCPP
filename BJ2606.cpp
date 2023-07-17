#include<bits/stdc++.h>
using namespace std;

int graph[101][101];
int visited[101];
int n, con, total;

void dfs(int cur){
    visited[cur] = 1;
    total++;

    for(int i = 1; i <= n; i++){
        if(graph[cur][i] == 1 && visited[i] == 0){
            dfs(i);
        }
    }
}

int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);

    cin >> n >> con;
    for(int i = 0; i < con; i++){
        int start, end;
        cin >> start >> end;
        graph[start][end] = 1;
        graph[end][start] = 1;
    }

    dfs(1);

    cout << total - 1;

    return 0;
}