#include<bits/stdc++.h>
using namespace std;

int main(){
    int n = 0;
    cin >> n;

    for(int i = 0; i < n-1; i++){
        for(int j = 1; j < 2*n; j++){
            if(j >= 2*n - i) break;
            if(i < j && j < 2*n - i) cout << "*";
            else cout << " ";
        }
        cout << "\n";
    }

    for(int i = 1; i <= n; i++){
        if(i == n) cout << "*";
        else cout << " ";
    }
    cout << "\n";

    for(int i = n-2; i >= 0; i--){
        for(int j = 1; j < 2*n; j++){
            if(j >= 2*n - i) break;
            if(i < j && j < 2*n - i) cout << "*";
            else cout << " ";
        }
        cout << "\n";
    }
    

    return 0;
}