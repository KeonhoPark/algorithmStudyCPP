#include<bits/stdc++.h>
using namespace std;

int n;
int dp[31];

int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);

    cin >> n;

    if(n % 2 == 1){
        cout << 0;
        return 0;
    }

    dp[0] = 1;
    dp[2] = 3;

    for(int i = 4; i <= n; i += 2){
        for(int j = i-2; j >= 0; j -= 2){
            if(j == i-2) dp[i] += dp[j] * dp[2];
            else dp[i] += dp[j] * 2;
        }
    }

    cout << dp[n];

    return 0;
}