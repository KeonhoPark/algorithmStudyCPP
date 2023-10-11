#include<bits/stdc++.h>
using namespace std;

int t;
int results[101];
int graph[1001][1001];
bool visited[1001];

void dfs(int t_num, int root, int start, int c_num, int visited_c_num){
    visited[start] = true;
    for(int i = 1; i <= c_num; i++) cout << visited[i] << " ";
    cout << "\n";
    visited_c_num++;

    if(visited_c_num == c_num){
        results[t_num] = root;
        return;
    }

    for(int i = 1; i <= c_num; i++){
        if(graph[start][i] == 1 && !visited[i]){
            dfs(t_num, root + 1, i, c_num, visited_c_num);
        }
    }
}

int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);

    cin >> t;

    for(int a = 0; a < t; a++){
        int n, m;
        cin >> n >> m;

        memset(graph, 0, sizeof(graph));
        memset(visited, false, sizeof(visited));

        for(int i = 0; i < m; i++){
            int start, end;
            cin >> start >> end;
            graph[start][end] = 1;
            graph[end][start] = 1;
        }

        dfs(a, 0, 1, n, 0);

        cout << results[a] << "\n";
    }

    return 0;
}