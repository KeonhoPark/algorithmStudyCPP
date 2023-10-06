#include<bits/stdc++.h>
using namespace std;

int n;
string dp[10001];

string add(string &a, string &b){
    string result(a.size(), '0');
    int a_size = a.size();
    int b_size = b.size();

    for(int i = 0; i < (a_size - b_size); i++) b = "0" + b;

    int flag = 0;
    for(int i = a_size-1; i >= 0; i--){
        int tmp = (a[i] - '0') + (b[i] - '0') + flag;
        flag = 0;

        if(tmp >= 10) flag = 1;

        result[i] = ((tmp % 10) + '0');
    }

    if(flag == 1) result = "1" + result;

    return result;
}

int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);

    cin >> n;
    dp[0] = "0";
    dp[1] = "1";

    for(int i = 2; i <= n; i++){
        dp[i] = add(dp[i-1], dp[i-2]);
    }

    cout << dp[n];

    return 0;
}