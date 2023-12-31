#include<bits/stdc++.h>
using namespace std;

int n;
int dp[1001];

int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);

    dp[1] = 1;
    dp[2] = 3;

    cin >> n;

    for(int i = 3; i <= n; i++){
        dp[i] = (dp[i-1] + (2 * (dp[i-2]))) % 10007;
    }

    cout << dp[n];

    return 0;
}