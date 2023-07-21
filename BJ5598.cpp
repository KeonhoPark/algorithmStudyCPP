#include<bits/stdc++.h>
using namespace std;

int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);

    string caesar;
    cin >> caesar;
    for(int i = 0; i < caesar.size(); i++){
        if(caesar[i] - 3 < 'A'){
            printf("%c", 'Z' - (2 - (caesar[i] - 'A')));
        }
        else{
            printf("%c", caesar[i] - 3);
        }
    }
    return 0;
}