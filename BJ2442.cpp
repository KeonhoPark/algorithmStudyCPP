#include<bits/stdc++.h>
using namespace std;

int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);

    int n = 0;
    cin >> n;

    for(int i = 0; i < n; i++){
        for(int j = 1; j < 2*n; j++){
            if(j > n+i) continue;
            if(j < n-i) cout << " ";
            else cout << "*";
        }
        cout << "\n";
    }
}