#include<bits/stdc++.h>
using namespace std;

int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);

    int n, m;
    cin >> n >> m;

    int graph[n+1][n+1];
    fill(&graph[0][0], &graph[n][n], 10000);

    for(int i = 0; i < m; i++){
        int s, e;
        cin >> s >> e;
        graph[s][e] = 1;
        graph[e][s] = 1;
    }

    for(int i = 1; i <= n; i++){
        graph[i][i] = 0;
    }

    for(int k = 1; k <= n; k++){
        for(int i = 1; i <= n; i++){
            for(int j = 1; j <= n; j++){
                graph[i][j] = min(graph[i][j], graph[i][k] + graph[k][j]);
            }
        }
    }

    int min = 10000;
    int index = 0;
    for(int i = 1; i <= n; i++){
        int s = 0;
        for(int j = 1; j <= n; j++){
            s += graph[i][j];
        }
        if(s < min){
            min = s;
            index = i;
        }
    }

    cout << index;

    return 0;
}