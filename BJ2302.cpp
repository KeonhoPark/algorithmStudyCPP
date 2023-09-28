#include<bits/stdc++.h>
using namespace std;

int n, m;
int result = 1;
int dp[41];
vector<int> vips;

void fib(){
    for(int i = 3; i <= 40; i++){
        dp[i] = dp[i-1] + dp[i-2];
    }
}

int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);

    dp[0] = 1;
    dp[1] = 1;
    dp[2] = 2;
    fib();

    cin >> n >> m;

    for(int i = 0; i < m; i++){
        int input;
        cin >> input;
        vips.push_back(input);
    }

    int start = 0;
    for(int i = 0; i < m; i++){
        result *= dp[vips[i] - start - 1];
        start = vips[i];
    }
    result *= dp[n - start];

    cout << result;

    return 0;
}