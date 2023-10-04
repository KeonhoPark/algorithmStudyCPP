#include<bits/stdc++.h>
using namespace std;

int n;
int dp[100001];

void init_dp(int n){
    for(int i = 2; i <= n; i++) dp[i] = 100001;
}

int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);

    cin >> n;
    init_dp(n);
    dp[1] = 1;

    for(int i = 2; i <= n; i++){
        int j = 1;
        while(i - (j * j) >= 0){
            dp[i] = min(dp[i], dp[i - (j * j)] + 1);
            j++;
        }
    }

    cout << dp[n] << "\n";

    return 0;
}