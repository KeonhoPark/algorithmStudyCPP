#include<bits/stdc++.h>
using namespace std;

int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);

    int n = 0;
    cin >> n;

    for(int i = 0; i < n; i++){
        for(int j = n; j > i; j--){
            cout << "*";
        }
        cout << "\n";
    }

}