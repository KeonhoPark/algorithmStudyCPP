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
        cout << (input[0] - '0') + (input[2] - '0') << "\n";
    }

    return 0;
}