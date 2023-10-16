#include<bits/stdc++.h>
using namespace std;

int n;
vector<int> numbers;
int dp[2][100001];
int asc, desc;

int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);

    for(int i = 0; i < 2; i++){
        for(int j = 0; j < 100001; j++){
            dp[i][j] = 1;
        }
    }

    cin >> n;
    for(int i = 0; i < n; i++){
        int input;
        cin >> input;
        numbers.push_back(input);
    }

    dp[0][0] = 1;
    dp[1][0] = 1;

    for(int i = 1; i < n; i++){
        if(numbers[i] >= numbers[i-1]) dp[0][i] = max(dp[0][i], dp[0][i-1] + 1);
        if(numbers[i] <= numbers[i-1]) dp[1][i] = max(dp[1][i], dp[1][i-1] + 1);
    }

    for(int i = 0; i < n; i++){
        asc = max(asc, dp[0][i]);
        desc = max(desc, dp[1][i]);
    }

    cout << max(asc, desc);

    return 0;
}