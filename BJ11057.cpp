#include<bits/stdc++.h>
using namespace std;

int n;
int dp[1001][10];
int result;

int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);

    for(int i = 1; i <= 1000; i++){
        for(int j = 0; j < 10; j++){
            dp[i][j] = 1;
        }
    }

    cin >> n;

    for(int i = 2; i <= n; i++){
        for(int j = 1; j < 10; j++){
            dp[i][j] = (dp[i][j-1] + dp[i-1][j]) % 10007;
        }
    }

    for(int j = 0; j < 10; j++){
        result += dp[n][j];
    }

    cout << result % 10007;

    return 0;
}
