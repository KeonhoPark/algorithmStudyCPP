#include<bits/stdc++.h>
using namespace std;

int n, s, m;
int volumes[51];
bool dp[51][1001];
int result = -1;

int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);

    memset(dp, 0, sizeof(dp));
    cin >> n >> s >> m;

    for(int i = 1; i <= n; i++){
        cin >> volumes[i];
    }

    if(s + volumes[1] <= m) dp[1][s + volumes[1]] = true;
    if(s - volumes[1] >= 0) dp[1][s - volumes[1]] = true;

    for(int i = 2; i <= n; i++){
        for(int j = 0; j <= m; j++){
            if(dp[i - 1][j]){
                if(j + volumes[i] <= m)
                    dp[i][j + volumes[i]] = true;
                if(j - volumes[i] >= 0)
                    dp[i][j - volumes[i]] = true;
            }
        }
    }

    for(int i = 0; i <= 1000; i++){
        if(dp[n][i])
            result = max(result, i);
    }

    cout << result;

    return 0;
}