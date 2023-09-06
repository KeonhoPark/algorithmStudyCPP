#include<bits/stdc++.h>
using namespace std;

int n, m, b;
char graph[501][501];
int res_time = 64000001;
int res_height = -1;

int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);

    cin >> n >> m >> b;

    int mx = -1;
    int mn = 257;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            int input;
            cin >> input;
            graph[i][j] = input;
            if(input < mn) mn = input;
            if(input > mx) mx = input;
        }
    }

    for(int k = mn; k <= mx; k++){
        int time = 0;
        int add = 0;
        int sub = 0;
        for(int i = 0; i < n; i++){
            for(int j = 0; j < m; j++){
                if(graph[i][j] < k){
                    add += (k - graph[i][j]);
                }
                else if(graph[i][j] > k){
                    sub += (graph[i][j] - k);
                }
            }
        }
        
        if(sub + b >= add){
            time = (add + (2 * sub));
            if(res_time >= time){
                res_time = time;
                res_height = k;
            }
        }
    }

    cout << res_time << " " << res_height;

    return 0;
}