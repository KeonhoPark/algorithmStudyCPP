#include<bits/stdc++.h>
using namespace std;

int n, x;
int visitors[250001];
vector<long long> totals;
long long mx;
int cnt;

int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);

    cin >> n >> x;
    for(int i = 1; i <= n; i++){
        cin >> visitors[i];
    }

    long long total = 0;
    for(int i = 1; i <= x; i++)
        total += visitors[i];
    totals.push_back(total);

    mx = total;
    for(int i = 1; i <= n - x; i++){
        total -= visitors[i];
        total += visitors[i + x];
        mx = max(mx, total);
        totals.push_back(total);
    }

    if(mx == 0){
        cout << "SAD";
        return 0;
    }

    for(int i = 0; i <= totals.size(); i++){
        if(totals[i] == mx) cnt++;
    }

    cout << mx << "\n";
    cout << cnt;

    return 0;
}