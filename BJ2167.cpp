#include<bits/stdc++.h>
using namespace std;

int graph[300][300];
int n, m, k;

int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);

    cin >> n >> m;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            cin >> graph[i][j];
        }
    }

    cin >> k;
    for(int a = 0; a < k; a++){
        int total = 0;
        int s_y, s_x, e_y, e_x;
        cin >> s_y >> s_x >> e_y >> e_x;

        for(int i = s_y - 1; i < e_y; i++){
            for(int j = s_x - 1; j < e_x; j++){
                total += graph[i][j];
            }
        }

        cout << total << "\n";
    }

    return 0;
}