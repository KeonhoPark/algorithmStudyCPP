#include<bits/stdc++.h>
using namespace std;

int t;
long long dp[100];

int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);

    dp[0] = 1;
    dp[1] = 1;
    dp[2] = 2;
    dp[3] = 4;

    for(int i = 4; i <= 67; i++){
        dp[i] = dp[i - 1] + dp[i - 2] + dp[i - 3] + dp[i - 4];
    }

    cin >> t;

    for(int a = 0; a < t; a++){
        int input;
        cin >> input;
        cout << dp[input] << "\n";
    }

    return 0;
}