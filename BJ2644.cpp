#include<bits/stdc++.h>
using namespace std;

int graph[101][101];
int visited[101];
int pNum, a, b, n;
int res = -1;

void dfs(int cur, int num){
    visited[cur] = 1;
    if(cur == b){
        res = num;
        return;
    }
    for(int i = 1; i <= pNum; i++){
        if(graph[cur][i] == 1 && visited[i] == 0){
            visited[i] = 1;
            dfs(i, num+1);
        }
    }
}

int main(){
    cin >> pNum;
    cin >> a >> b;
    cin >> n;

    for(int i = 0; i < n; i++){
        int inA, inB;
        cin >> inA >> inB;
        graph[inA][inB] = 1;
        graph[inB][inA] = 1;
    }

    dfs(a, 0);
    cout << res;
}