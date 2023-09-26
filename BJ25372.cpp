#include<bits/stdc++.h>
using namespace std;

int t;

int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);

    cin >> t;
    for(int i = 0; i < t; i++){
        string input;
        cin >> input;
        if(6 <= input.size() && input.size() <= 9) cout << "yes" << "\n";
        else cout << "no" << "\n";
    }
}