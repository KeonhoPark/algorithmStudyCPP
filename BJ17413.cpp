#include<bits/stdc++.h>
using namespace std;

string s;
deque<char> dq;

int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);

    getline(cin, s);

    int flag = 0;
    for(int i = 0; i < s.size(); i++){
        if(s[i] == ' ' && flag == 0){
            while(!dq.empty()){
                cout << dq.back();
                dq.pop_back();
            }
            cout << " ";
        }
        else if(s[i] == '<'){
            while(!dq.empty()){
                cout << dq.back();
                dq.pop_back();
            }
            cout << "<";
            flag = 1;
        }
        else if(s[i] == '>'){
            while(!dq.empty()){
                cout << dq.front();
                dq.pop_front();
            }
            cout << ">";
            flag = 0;
        }
        else{
            dq.push_back(s[i]);
        }
    }

    while(!dq.empty()){
        cout << dq.back();
        dq.pop_back();
    }

    return 0;
}