#include<bits/stdc++.h>
using namespace std;

int n, k;
vector<int> coins;
bool coins_visited[100001];
int dp[10001];

void init_dp(int n){
    dp[0] = 0;
    for(int i = 1; i <= n; i++) dp[i] = 10001;
}

int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);

    cin >> n >> k;
    init_dp(k);

    for(int i = 0; i < n; i++){
        int coin;
        cin >> coin;
        if(coins_visited[coin] == false){
            coins.push_back(coin);
            coins_visited[coin] = true;
        }
    }

    sort(coins.begin(), coins.end());

    for(int i = 0; i < coins.size(); i++){
        for(int j = coins[i]; j <= k; j++){
            dp[j] = min(dp[j], dp[j - coins[i]] + 1);
        }
    }

    if(dp[k] == 10001) cout << -1;
    else cout << dp[k];

    return 0;
}