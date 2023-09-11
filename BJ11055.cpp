#include<bits/stdc++.h>
using namespace std;

int n;
int numbers[1001];
int dp[1001];

int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);

    cin >> n;
    for(int i = 1; i <= n; i++){
        cin >> numbers[i];
        dp[i] = numbers[i];
    }

    int result = numbers[1];

    for(int i = 2; i <= n; i++){
        int mx = 0;
        for(int j = 1; j < i; j++){
            if(numbers[i] > numbers[j]){
                if(mx < dp[j]){
                    mx = dp[j];
                }
            }
        }
        dp[i] = mx + numbers[i];
        if(result < dp[i]) result = dp[i];
    }

    cout << result;

    return 0;
}