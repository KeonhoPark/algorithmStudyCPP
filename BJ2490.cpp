#include<bits/stdc++.h>
using namespace std;

int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);

    for(int i = 0; i < 3; i++){
        int res = 0;
        for(int j = 0; j < 4; j++){
            int input;
            cin >> input;
            res += input;
        }
        if(res == 0) cout << "D" << "\n";
        if(res == 1) cout << "C" << "\n";
        if(res == 2) cout << "B" << "\n";
        if(res == 3) cout << "A" << "\n";
        if(res == 4) cout << "E" << "\n";
    }
}