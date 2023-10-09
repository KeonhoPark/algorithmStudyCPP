#include<bits/stdc++.h>
using namespace std;

string dp[1001];
int n;

int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);

    cin >> n;

    dp[1] = "SK";
    dp[2] = "CY";
    dp[3] = "SK";
    dp[4] = "SK";

    for(int i = 5; i <= n; i++){
        if(dp[i-1] == "CY" || dp[i-3] == "CY" || dp[i-4] == "CY") dp[i] = "SK";
        else dp[i] = "CY";
    }

    cout << dp[n];

    return 0;
}