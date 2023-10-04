#include<bits/stdc++.h>
using namespace std;

int n;
int dp[10000001];

int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);

    cin >> n;

    dp[1] = 1;
    dp[2] = 2;

    for(int i = 3; i <= n; i++){
        dp[i] = (dp[i-1] + dp[i-2]) % 10;
    }

    cout << dp[n];

    return 0;
}