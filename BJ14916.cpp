#include<bits/stdc++.h>
using namespace std;

int n;
int dp[100001];

int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);

    cin >> n;

    dp[1] = -1;
    dp[2] = 1;
    dp[3] = -1;
    dp[4] = 2;
    dp[5] = 1;
    dp[6] = 3;

    for(int i = 7; i <= n; i++){
        if(dp[i-2] == -1) dp[i] = dp[i-5] + 1;
        else if(dp[i-5] == -1) dp[i] = dp[i-2] + 1;
        else dp[i] = min(dp[i-2], dp[i-5]) + 1;
    }

    cout << dp[n];

    return 0;
}