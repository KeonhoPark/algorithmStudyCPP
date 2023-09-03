#include<bits/stdc++.h>
using namespace std;

int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);

    int a, b = 1;
    while(true) {
        cin >> a >> b;
        if(a == 0 && b == 0) break;
        cout << a + b << "\n";
    }

    return 0;
}