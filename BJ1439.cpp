#include<bits/stdc++.h>
using namespace std;

int result;

int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);

    string s;
    cin >> s;

    int flag = 0;
    for(int i = 0; i < s.size(); i++){
        if(s[i] != s[0] && flag == 0){
            result++;
            flag = 1;
        }
        if(s[i] == s[0]) flag = 0;
    }

    cout << result;

    return 0;
}