#include<bits/stdc++.h>
using namespace std;

long long a, b;

long long GCD(long long a, long long b){
    if(a % b == 0) return b;
    return GCD(b, a % b);
}

int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);

    cin >> a >> b;
    long long mn = min(a, b);
    long long mx = max(a, b);

    long long gcd = GCD(mx, mn);

    cout << gcd * (a / gcd) * (b / gcd);

    return 0;
}