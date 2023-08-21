#include<bits/stdc++.h>
using namespace std;

int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);

    int t = 0;
    cin >> t;
    for(int i = 0; i < t; i++){
        stack<char> s;
        string input;
        cin >> input;

        char flag = 0;
        for(auto c : input){
            if(c == '(') s.push(c);
            else{
                if(s.empty()){
                    flag = 1;
                    break;
                }
                else{
                    s.pop();
                }
            }
        }

        if(flag || !s.empty()) cout << "NO" << "\n";
        else cout << "YES" << "\n";
    }
}