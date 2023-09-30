#include<bits/stdc++.h>
using namespace std;

int n;
int packs[1001];
int dp[1001];

int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);

    cin >> n;

    for(int i = 1; i <= n; i++){
        cin >> packs[i];
    }

    dp[1] = packs[1];

    for(int i = 1; i <= n; i++){
        int mx = -1;
        for(int j = 1; j < i; j++){
            mx = max(mx, dp[j] + packs[i - j]);
        }
        dp[i] = max(packs[i], mx);
    }

    cout << dp[n];

    return 0;
}