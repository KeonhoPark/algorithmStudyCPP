#include<bits/stdc++.h>
using namespace std;

int t;

int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);

    cin >> t;

    for(int i = 0; i < t; i++){
        int j_x, j_y, j_d, b_x, b_y, b_d;
        cin >> j_x >> j_y >> j_d >> b_x >> b_y >> b_d;

        int between_distance = (j_x - b_x) * (j_x - b_x) + (j_y - b_y) * (j_y - b_y);
        int tmp1 = (j_d - b_d) * (j_d - b_d);
        int tmp2 = (j_d + b_d) * (j_d + b_d);

        if(between_distance == 0){
            if(j_d == b_d) cout << -1 << "\n";
            else cout << 0 << "\n";
        }
        else{
            if(tmp1 < between_distance && between_distance < tmp2) cout << 2 << "\n";
            else if(between_distance == tmp1 || between_distance == tmp2) cout << 1 << "\n";
            else cout << 0 << "\n";
        }
    }

    return 0;
}