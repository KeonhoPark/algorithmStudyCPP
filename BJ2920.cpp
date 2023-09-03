#include<bits/stdc++.h>
using namespace std;

int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);

    int start;
    cin >> start;

    int prev = start;
    int flag = 0;
    for(int i = 1; i < 8; i++){
        int input;
        cin >> input;

        if(start == 8 && input == (prev - 1)){
            prev = input;
        }
        else if(start == 1 && input == (prev + 1)){
            prev = input;
        }
        else{
            flag = 1;
            break;
        }
    }

    if(flag == 1) cout << "mixed";
    else if(start == 1) cout << "ascending";
    else if(start == 8) cout << "descending";

    return 0;
}