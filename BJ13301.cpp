#include<bits/stdc++.h>
using namespace std;

int n;
long long dp[82];

int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);

    cin >> n;

    dp[1] = 1;

    for(int i = 2; i <= n+1; i++){
        dp[i] = dp[i-1] + dp[i-2];
    }

    cout << dp[n+1] * 2 + dp[n] * 2;

    return 0;
}