#include<bits/stdc++.h>
using namespace std;

int graph[1025][1025];

int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);

    int n, m;
    cin >> n >> m;

    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= n; j++){
            int cur;
            cin >> cur;
            graph[i][j] = graph[i-1][j] + graph[i][j-1] + cur - graph[i-1][j-1];
        }
    }

    for(int i = 0; i < m; i++){
        int x1, y1, x2, y2;
        cin >> x1 >> y1 >> x2 >> y2;
        int result = graph[x2][y2] - graph[x2][y1-1] - graph[x1-1][y2] + graph[x1-1][y1-1];
        cout << result << "\n";
    }

    return 0;
}