#include<bits/stdc++.h>
using namespace std;

int mn = 101;
int total;

int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);

    for(int i = 0; i < 7; i++){
        int input;
        cin >> input;

        if(input % 2 == 1){
            total += input;
            mn = min(mn, input);
        }
    }

    if(total == 0) cout << -1;
    else{
        cout << total << "\n";
        cout << mn;
    }
}