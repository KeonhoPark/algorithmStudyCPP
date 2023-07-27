#include<bits/stdc++.h>
using namespace std;

int n, m;
int mx = -1;
int cnt;
vector<vector<int>> relations(10001);
vector<int> visited(10001, 0);
vector<int> result(10001, 0);

void dfs(int index, int root){
    visited[index] = 1;
    cnt++;

    int len = relations[index].size();
    for(int i = 0; i < len; i++){
        if(visited[relations[index][i]] == 0){
            dfs(relations[index][i], root);
        }
    }
}

int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);

    cin >> n >> m;

    for(int i = 0; i < m; i++){
        int a, b;
        cin >> a >> b;
        relations[b].push_back(a);
    }

    for(int i = 1; i <= n; i++){
        cnt = 0;
        for(int j = 1; j <= n; j++){
            visited[j] = 0;
        }
        dfs(i, i);
        if(cnt > mx) mx = cnt;
        result[i] = cnt;
    }

    for(int i = 1; i <= n; i++){
        if(result[i] == mx) cout << i << " ";
    }

    return 0;
}