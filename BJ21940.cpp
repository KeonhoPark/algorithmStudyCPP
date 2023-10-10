#include<bits/stdc++.h>
using namespace std;

const int INF = 987987987;

int n, m, k;
int dist[201][201];
int times[201] = {-1, };
vector<int> living_cities;
vector<int> results;

void init_dist(int n){
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= n; j++){
            if(i == j){
                dist[i][j] = 0;
                continue;
            }
            dist[i][j] = INF;
        }
    }
}

int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);

    cin >> n >> m;
    init_dist(n);

    for(int i = 0; i < m; i++){
        int start, end, time;
        cin >> start >> end >> time;
        dist[start][end] = time;
    }

    cin >> k;

    for(int i = 0; i < k; i++){
        int city;
        cin >> city;
        living_cities.push_back(city);
    }

    for(int k = 1; k <= n; k++){
        for(int i = 1; i <= n; i++){
            for(int j = 1; j <= n; j++){
                dist[i][j] = min(dist[i][j], dist[i][k] + dist[k][j]);
            }
        }
    }

    for(int i = 1; i <= n; i++){
        for(auto c : living_cities){
            times[i] = max(times[i], dist[c][i] + dist[i][c]);
        }
    }

    int mn = INF;
    for(int i = 1; i <= n; i++){
        if(mn > times[i]) mn = times[i];
    }

    for(int i = 1; i <= n; i++){
        if(times[i] == mn) results.push_back(i);
    }

    sort(results.begin(), results.end());
    for(auto r : results) cout << r << " ";

    return 0;
}
