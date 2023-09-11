#include<bits/stdc++.h>
using namespace std;

long long zeros[91];
long long ones[91];
int n;

int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);

    zeros[1] = 0;
    ones[1] = 1;

    cin >> n;

    for(int i = 2; i <= n; i++){
        zeros[i] = zeros[i-1] + ones[i-1];
        ones[i] = zeros[i-1];
    }

    cout << zeros[n] + ones[n];

    return 0;
}