#include<bits/stdc++.h>
using namespace std;

int t;

int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);

    cin >> t;

    for(int i = 0; i < t; i++){
        int n = 0;
        cin >> n;

        int scores[2][100001];
        int dp[2][100001];
        memset(scores, -1, sizeof(scores));
        memset(dp, -1, sizeof(dp));

        for(int j = 1; j <= n; j++){
            cin >> scores[0][j];
        }
        for(int j = 1; j <= n; j++){
            cin >> scores[1][j];
        }

        if(n == 1){
            cout << max(scores[0][1], scores[1][1]) << "\n";
            continue;
        }
        else if(n == 2){
            cout << max(scores[0][1] + scores[1][2], scores[1][1] + scores[0][2]) << "\n";
            continue;
        }

        dp[0][1] = scores[0][1];
        dp[1][1] = scores[1][1];
        dp[0][2] = scores[1][1] + scores[0][2];
        dp[1][2] = scores[0][1] + scores[1][2];

        for(int j = 3; j <= n; j++){
            dp[0][j] = max(dp[1][j-1], dp[1][j-2]) + scores[0][j];
            dp[1][j] = max(dp[0][j-1], dp[0][j-2]) + scores[1][j];
        }

        cout << max(dp[0][n], dp[1][n]) << "\n";
    }

    return 0;
}