#include<bits/stdc++.h>
using namespace std;

int graph[101][101];
int result;

int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);

    memset(graph, 0, sizeof(graph));

    for(int t = 0; t < 4; t++){
        int ldx, ldy, rux, ruy;
        cin >> ldx >> ldy >> rux >> ruy;

        for(int i = ldx; i < rux; i++){
            for(int j = ldy; j < ruy; j++){
                if(graph[i][j] == 0){
                    graph[i][j] = 1;
                    result++;
                }
            }
        }
    }

    cout << result;

    return 0;
}