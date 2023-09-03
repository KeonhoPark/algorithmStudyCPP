#include<bits/stdc++.h>
using namespace std;

int result;

int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);

    for(int i = 0; i < 5; i++){
        int input;
        cin >> input;

        result += (input * input);
    }

    cout << result % 10;

    return 0;
}