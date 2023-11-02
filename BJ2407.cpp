#include<bits/stdc++.h>
using namespace std;

int n, m;
string dp[200][200];

string add(string a, string b){
    int max_size = max(a.size(), b.size());
    string result = "";
    int sum = 0;

    for(int i = 0; i < max_size || sum; i++){
        if(a.size() > i) sum += a[i] - '0';
        if(b.size() > i) sum += b[i] - '0';

        result += sum % 10 + '0';
        sum /= 10;
    }

    return result;
}

string combination(int n, int m){
    if(n == m || m == 0) return "1";

    if(dp[n][m] != "") return dp[n][m];

    return dp[n][m] = add(combination(n - 1, m - 1), combination(n - 1, m));
}

int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);

    cin >> n >> m;

    combination(n, m);

    for(int i = dp[n][m].size() - 1; i >= 0; i--){
        cout << dp[n][m][i];
    }

    return 0;
}