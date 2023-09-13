#include<bits/stdc++.h>
using namespace std;

int t;
int dp[30][30];

int combination(int n, int r){
	if(n == r || r == 0) return 1;
    if(dp[n][r] != -1) return dp[n][r];
    int result = combination(n - 1, r - 1) + combination(n - 1, r);
    dp[n][r] = result;
    return result;
}

int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);

    for(int i = 0; i < 30; i++){
        for(int j = 0; j < 30; j++){
            dp[i][j] = -1;
        }
    }

    cin >> t;

    for(int i = 0; i < t; i++){
        int n, m;
        cin >> n >> m;
        cout << combination(m, n) << "\n";
    }

    return 0;
}