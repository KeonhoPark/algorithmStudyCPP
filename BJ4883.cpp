#include<bits/stdc++.h>
using namespace std;

int n = -1;
int graph[100001][3];
int dp[100001][3];

void init_dp(int n){
    for(int i = 0; i < n; i++){
        for(int j = 0; j < 3; j++){
            dp[i][j] = 1000001;
        }
    }
}

int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);

    int index = 1;
    while(true){
        cin >> n;
        if(n == 0) break;

        for(int i = 0; i < n; i++){
            for(int j = 0; j < 3; j++){
                cin >> graph[i][j];
            }
        }

        init_dp(n);
        dp[0][0] = 1000001;
        dp[0][1] = graph[0][1];
        dp[0][2] = graph[0][1] + graph[0][2];

        for(int i = 1; i < n; i++){
            for(int j = 0; j < 3; j++){
                if(j == 0){
                    dp[i][j] = min({dp[i][j], graph[i][j] + dp[i-1][0], graph[i][j] + dp[i-1][1]});
                }
                else if(j == 1){
                    dp[i][j] = min({dp[i][j], graph[i][j] + dp[i-1][0], graph[i][j] + dp[i-1][1], graph[i][j] + dp[i-1][2], graph[i][j] + dp[i][0]});
                }
                else{
                    dp[i][j] = min({dp[i][j], graph[i][j] + dp[i-1][1], graph[i][j] + dp[i-1][2], graph[i][j] + dp[i][1]});
                }
            }
        }

        cout << index << ". " << dp[n-1][1] << "\n";
        index++;
    }

    return 0;
}