#include<bits/stdc++.h>
using namespace std;

int n, m, r;
int dist[101][101];
int items[101];
int result;

void init_dist(int n){
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= n; j++){
            if(i == j){
                dist[i][j] = 0;
                continue;
            }
            dist[i][j] = 16;
        }
    }
}

int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);

    cin >> n >> m >> r;
    init_dist(n);

    for(int i = 1; i <= n; i++){
        cin >> items[i];
    }

    for(int i = 0; i < r; i++){
        int a, b, l;
        cin >> a >> b >> l;
        dist[a][b] = l;
        dist[b][a] = l;
    }

    for(int k = 1; k <= n; k++){
        for(int i = 1; i <= n; i++){
            for(int j = 1; j <= n; j++){
                dist[i][j] = min(dist[i][j], dist[i][k] + dist[k][j]);
            }
        }
    }

    for(int i = 1; i <= n; i++){
        int tmp = 0;
        for(int j = 1; j <= n; j++){
            if(dist[i][j] <= m) tmp += items[j];
        }
        if(result < tmp) result = tmp;
    }

    cout << result;

    return 0;
}