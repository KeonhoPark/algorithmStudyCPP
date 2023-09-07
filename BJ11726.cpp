#include<bits/stdc++.h>
using namespace std;

int n;
int fib[1001];

int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);

    memset(fib, 0, 1001);
    fib[1] = 1;
    fib[2] = 2;

    cin >> n;

    for(int i = 3; i <= n; i++){
        fib[i] = (fib[i-1] + fib[i-2]) % 10007;
    }

    cout << fib[n];

    return 0;
}