#include<bits/stdc++.h>
using namespace std;

int n, m;
int sums[100001];

int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);

    memset(sums, 0, sizeof(int) * 100001);
    cin >> n >> m;

    int s = 0;
    for(int i = 1; i <= n; i++){
        int input;
        cin >> input;
        s += input;
        sums[i] = s;
    }

    for(int i = 0; i < m; i++){
        int start, end;
        cin >> start >> end;
        cout << sums[end] - sums[start - 1] << "\n";
    }

    return 0;
}