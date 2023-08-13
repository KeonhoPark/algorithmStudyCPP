#include<bits/stdc++.h>
using namespace std;

int main(){
    int n = 0;
    cin >> n;

    for(int i = 1; i < n; i++){
        for(int j = 1; j < 2*n; j++){
            if(j >= n+i) break;
            if(j > n-i && j < n+i) cout << "*";
            else cout << " ";
        }
        cout << "\n";
    }

    for(int i = n; i > 0; i--){
        for(int j = 1; j < 2*n; j++){
            if(j >= n+i) break;
            if(j > n-i && j < n+i) cout << "*";
            else cout << " ";
        }
        cout << "\n";
    }

    return 0;
}