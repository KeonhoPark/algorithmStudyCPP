#include<bits/stdc++.h>
using namespace std;

int t, w;
int apples[1001];
int dp[3][1001][31];
int result;

int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);

    cin >> t >> w;

    for(int i = 1; i <= t; i++){
        cin >> apples[i];
    }

    for(int i = 1; i <= t; i++){
        for(int j = 1; j <= w; j++){
            dp[1][i][0] = dp[1][i-1][0] + (apples[i] == 1 ? 1 : 0);
            if(j > i) break;
            if(apples[i] == 1){
                dp[1][i][j] = max(dp[1][i-1][j] + 1, dp[2][i-1][j-1] + 1);
                dp[2][i][j] = max(dp[2][i-1][j], dp[1][i-1][j-1]);
            }
            else{
                dp[1][i][j] = max(dp[1][i-1][j], dp[2][i-1][j-1]);
                dp[2][i][j] = max(dp[2][i-1][j] + 1, dp[1][i-1][j-1] + 1);
            }
        }
    }

    for(int i = 1; i <= w+1; i++){
        int tmp = max(dp[1][t][i], dp[2][t][i]);
        if(result < tmp) result = tmp;
    }

    cout << result;

    return 0;
}