#include<bits/stdc++.h>
using namespace std;

int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);

    string input;

    while(true){
        cin >> input;
        if(input == "0") return 0;

        int flag = 0;
        for(int i = 0; i < input.size(); i++){
            if(input[i] != input[input.size() - i - 1]){
                flag = 1;
                break;
            }
        }

        if(flag == 1) cout << "no" << "\n";
        else cout << "yes" << "\n";
    }

    return 0;
}