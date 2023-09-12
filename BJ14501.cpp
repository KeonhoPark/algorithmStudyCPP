#include<bits/stdc++.h>
using namespace std;

#define MAX 1500001

int n;
int times[MAX];
int pays[MAX];
int dp[MAX];

int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);

    cin >> n;

    for(int i = 1; i <= n; i++){
        int t, p;
        cin >> t >> p;
        times[i] = t;
        pays[i] = p;
    }

    for(int i = n; i >= 1; i--){
        if(i + times[i] - 1 > n) dp[i] = dp[i+1];
        else dp[i] = max(pays[i] + dp[times[i] + i], dp[i+1]);
    }

    cout << dp[1];

    return 0;
}