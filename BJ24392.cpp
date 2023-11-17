#include<bits/stdc++.h>
using namespace std;

int n, m;
int graph[1001][1001];
long long dp[1001][1001];
int dx[3] = {-1, 0, 1};
int dy[3] = {1, 1, 1};

bool isIn(int new_y, int new_x){
    if(new_y < 0 || new_y >= n | new_x < 0 || new_x >= m) return false;
    return true;
}

int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);

    cin >> n >> m;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            int input;
            cin >> input;
            graph[i][j] = input;
            if(i == n - 1) dp[i][j] = input;
        }
    }

    for(int i = n - 2; i >= 0; i--){
        for(int j = 0; j < m; j++){
            if(graph[i][j] == 0) continue;

            for(int k = 0; k < 3; k++){
                int par_y = i + dy[k];
                int par_x = j + dx[k];

                if(isIn(par_y, par_x) && graph[par_y][par_x] == 1)
                    dp[i][j] += (dp[par_y][par_x] % 1000000007);
                    dp[i][j] % 1000000007;
            }
        }
    }

    long long result = 0;
    for(int i = 0; i < m; i++){
        result += (dp[0][i] % 1000000007);
    }

    cout << result % 1000000007 << "\n";
    
    // for(int i = 0; i < n; i++){
    //     for(int j = 0; j < m; j++){
    //         cout << dp[i][j] << " ";
    //     }
    //     cout << "\n";
    // }

    return 0;
}