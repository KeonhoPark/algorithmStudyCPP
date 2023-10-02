#include<bits/stdc++.h>
using namespace std;

int n, k;
set<int> coins;
int dp[10001];

int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);

    cin >> n >> k;
    dp[0] = 1;

    for(int i = 0; i < n; i++){
        int input;
        cin >> input;
        coins.insert(input);
    }

    for(auto c : coins){
        for(int i = c; i <= k; i++){
            dp[i] += dp[i - c];
        }
    }

    cout << dp[k];

    return 0;
}