#include<bits/stdc++.h>
using namespace std;

int n, k;
int graph[5000000];
long long result;

int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);

    cin >> n >> k;

    int max_cor = -1;
    for(int i = 0; i < n; i++){
        int cor, amount;
        cin >> amount >> cor;
        if(cor > max_cor) max_cor = cor;
        graph[cor] = amount;
    }

    long long total = 0;
    for(int i = 0; i <= 2 * k; i++){
        total += graph[i];
    }

    result = total;
    for(int i = 0; i <= max_cor - 2*k - 1; i++){
        total -= graph[i];
        total += graph[i + 2*k + 1];
        result = max(result, total);
    }

    cout << result;

    return 0;
}

