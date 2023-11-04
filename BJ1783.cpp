#include<bits/stdc++.h>
using namespace std;

int col, row;

int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);

    cin >> col >> row;

    if(col == 1 || row == 1){
        cout << 1;
        return 0;
    }
    else{
        if(col == 2){
            cout << min(4, (row + 1) / 2);
        }
        else{
            if(row < 7) cout << min(4, row);
            else cout << row - 2;
        }
    }

    return 0;
}