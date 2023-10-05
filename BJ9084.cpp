#include<bits/stdc++.h>
using namespace std;

int t;
int dp[10001];

int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);

    cin >> t;

    for(int a = 0; a < t; a++){
        int n, m;
        int coins[21];
        cin >> n;
        for(int i = 0; i < n; i++) cin >> coins[i];
        cin >> m;

        memset(dp, 0, sizeof(dp));
        dp[0] = 1;

        for(int i = 0; i < n; i++){
            for(int j = coins[i]; j <= m; j++){
                dp[j] = dp[j] + dp[j - coins[i]];
            }
        }

        cout << dp[m] << "\n";
    }

    return 0;
}