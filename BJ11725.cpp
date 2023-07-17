#include<bits/stdc++.h>
using namespace std;

vector<int> graph[100001];
int pList[100001];
int visited[100001];
int n;

void dfs(int cur){
    visited[cur] = 1;
    for(int i = 0; i < graph[cur].size(); i++){
        if(visited[graph[cur][i]] == 0){
            visited[graph[cur][i]] = 1;
            pList[graph[cur][i]] = cur;
            dfs(graph[cur][i]);
        }
    }
}

int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);

    cin >> n;
    for(int i = 0; i < n-1; i++){
        int p, c;
        cin >> p >> c;
        graph[p].push_back(c);
        graph[c].push_back(p);
    }

    dfs(1);

    for(int i = 2; i <= n; i++){
        cout << pList[i] << "\n";
    }

    return 0;
}