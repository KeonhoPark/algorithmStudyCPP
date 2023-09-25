#include<bits/stdc++.h>
using namespace std;

int result;

int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);


    for(int i = 1; i <= 8; i++){
        string input;
        cin >> input;
        for(int j = 1; j <= input.size(); j++){
            if(i % 2 == 0){
                if(j % 2 == 0 && input[j-1] == 'F') result++;
            }
            else{
                if(j % 2 == 1 && input[j-1] == 'F') result++;
            }
        }
    }

    cout << result;

    return 0;
}