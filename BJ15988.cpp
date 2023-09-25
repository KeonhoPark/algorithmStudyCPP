#include<bits/stdc++.h>
using namespace std;

int t;
long long dp[1000001];

int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);

    dp[1] = 1;
    dp[2] = 2;
    dp[3] = 4;

    for(int i = 4; i <= 1000000; i++){
        dp[i] = (dp[i-1] + dp[i-2] + dp[i-3]) % 1000000009;
    }

    cin >> t;
    for(int i = 0; i < t; i++){
        int input;
        cin >> input;
        cout << dp[input] << "\n";
    }

    return 0;
}