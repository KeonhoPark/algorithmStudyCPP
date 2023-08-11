#include<bits/stdc++.h>
using namespace std;

int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);

    int nine_total = 0;
    int diff = 0;
    int nan[9];
    memset(nan, 0, sizeof(int) * 9);

    for(int i = 0; i < 9; i++){
        cin >> nan[i];
        nine_total += nan[i];
    }

    diff = nine_total - 100;
    sort(nan, nan+9);

    for(int i = 0; i < 8; i++){
        int flag = 0;
        for(int j = i+1; j < 9; j++){
            if(nan[i] + nan[j] == diff){
                nan[i] = 0;
                nan[j] = 0;
                flag = 1;
                break;
            }
        }
        if(flag == 1) break;
    }

    for(auto n : nan){
        if(n != 0) cout << n << "\n";
    }
}