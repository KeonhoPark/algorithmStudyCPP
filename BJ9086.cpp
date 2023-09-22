#include<bits/stdc++.h>
using namespace std;

int n;

int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);

    cin >> n;
    for(int i = 0; i < n; i++){
        string input;
        cin >> input;
        cout << input[0] << input[input.size()-1] << "\n";
    }

    return 0;
}