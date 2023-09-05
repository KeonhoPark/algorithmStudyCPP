#include<bits/stdc++.h>
using namespace std;

int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);

    int n1, n2;
    cin >> n1 >> n2;
    int mn = min(n1, n2);
    int gcd;

    for(int i = mn; i >= 1; i--){
        if((n1 % i == 0) && (n2 % i == 0)){
             cout << i << "\n";
             gcd = i;
             break;
        }
    }

    cout << gcd * (n1 / gcd) * (n2 / gcd);

    return 0;
}