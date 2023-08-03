#include<bits/stdc++.h>
using namespace std;

int comb[201][201][201];
int result[201];
int a, b, c;

void dfs(int cur_a, int cur_b, int cur_c){
    if(comb[cur_a][cur_b][cur_c] == 1) return;

    comb[cur_a][cur_b][cur_c] = 1;
    if(cur_a == 0 && result[cur_c] == 0) result[cur_c] = 1;

    dfs(cur_a - min(b - cur_b, cur_a), cur_b + min(b - cur_b, cur_a), cur_c);
    dfs(cur_a - min(c - cur_c, cur_a), cur_b, cur_c + min(c - cur_c, cur_a));
    dfs(cur_a + min(a - cur_a, cur_b), cur_b - min(a - cur_a, cur_b), cur_c);
    dfs(cur_a, cur_b - min(c - cur_c, cur_b), cur_c + min(c - cur_c, cur_b));
    dfs(cur_a + min(a - cur_a, cur_c), cur_b, cur_c - min(a - cur_a, cur_c));
    dfs(cur_a, cur_b + min(b - cur_b, cur_c), cur_c - min(b - cur_b, cur_c));
}

int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);

    memset(result, 0, sizeof(int) * 201);
    for(int i = 1; i <= 200; i++){
        for(int j = 1; j <= 200; j++){
            for(int k = 1; k <= 200; k++){
                comb[i][j][k] = 0;
            }
        }
    }

    cin >> a >> b >> c;
    dfs(0, 0, c);
    for(int i = 0; i <= 200; i++){
        if(result[i] == 1) cout << i << " ";
    }

    return 0;
}