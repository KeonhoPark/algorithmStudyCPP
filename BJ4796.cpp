#include<bits/stdc++.h>
using namespace std;

int idx = 1;

int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);

    while(true){
        int l, p, v;
        cin >> l >> p >> v;
        if(l == 0) break;

        cout << "Case " << idx << ": " << ((v / p) * l) + min(v % p, l) << "\n";
        idx++;
    }

    return  0;
}