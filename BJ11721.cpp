#include<bits/stdc++.h>
using namespace std;

int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);

    string input;
    cin >> input;

    for(int i = 0; i < input.size(); i++){
        if(i != 0 && i % 10 == 0) cout << "\n";
        cout << input[i];
    }

    return 0;
}