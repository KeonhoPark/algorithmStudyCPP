#include<bits/stdc++.h>
using namespace std;

long long sol(int a, int b, int c){
    if(b == 1) return a % c;

    else{
        long long temp = sol(a, b/2, c);
        temp = temp * temp % c;

        if(b % 2 == 0) return temp;
        else{
            return temp * a % c;
        }
    }
}

int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);

    long long a, b, c;
    cin >> a >> b >> c;
    cout << sol(a, b, c);
    return 0;
}