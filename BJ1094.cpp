#include<bits/stdc++.h>
using namespace std;

int bit[7];
int result;

int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);

    int x;
    cin >> x;

    for(int i = 6; i >= 0; i--){
        int val = pow(2, i);
        if(x >= val){
            x -= val;
            bit[i] = 1;
        }
        if(x == 0) break;
    }

    for(int i = 0; i < 7; i++){
        result += bit[i];
    }

    cout << result;

    return 0;
}