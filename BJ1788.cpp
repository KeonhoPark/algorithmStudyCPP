#include<bits/stdc++.h>
using namespace std;

int dp[1000001] = {0,};

void solve(int n){
    if(n == 0){
        cout << 0 << "\n";
        cout << 0;
    }

    else if(n > 0){
        dp[0] = 0;
        dp[1] = 1;

        for(int i = 2; i <= n; i++){
            dp[i] = (dp[i-1] + dp[i-2]) % 1000000000;
        }

        cout << 1 << "\n";
        cout << dp[n] % 1000000000;
    }

    else if(n < 0){
        dp[0] = 1;
        dp[1] = 0;

        int tmp = (n * (-1)) + 1;
        for(int i = 2; i <= tmp; i++){
            dp[i] = (dp[i-2] - dp[i-1]) % 1000000000;
        }

        if(dp[tmp] < 0) cout << -1 << "\n";
        else cout << 1 << "\n";

        cout << abs(dp[tmp]) % 1000000000;
    }
}

int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);

    int n;
    cin >> n;

    solve(n);

    return 0;
}