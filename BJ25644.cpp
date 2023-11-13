#include<bits/stdc++.h>
using namespace std;

int n;
vector<long long> stocks;
long long dp[200001];

int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);

    cin >> n;

    for(int i = 0; i < n; i++){
        long long input;
        cin >> input;
        stocks.push_back(input);
    }

    dp[0] = 0;
    long long min_stock = stocks[0];
    long long max_profit = 0;

    for(int i = 1; i < n; i++){
        if(stocks[i] > min_stock){
            dp[i] = max(max_profit, stocks[i] - min_stock);
            max_profit = max(max_profit, dp[i]);
        }
        else{
            min_stock = stocks[i];
        }
    }

    cout << max_profit;

    return 0;
}