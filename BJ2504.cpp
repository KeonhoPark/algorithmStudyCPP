#include<bits/stdc++.h>
using namespace std;

int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);

    stack<char> s;
    int sum = 0;
    int mul = 1;
    string input;
    cin >> input;

    for(int i = 0; i < input.size(); i++){
        if(input[i] == '('){
            mul *= 2;
            s.push(input[i]);
        }
        else if(input[i] == '['){
            mul *= 3;
            s.push(input[i]);
        }
        else if(input[i] == ')'){
            if(s.empty() || s.top() != '('){
                cout << 0;
                return 0;
            }
            if(input[i-1] == '(') sum += mul;
            mul /= 2;
            s.pop();
        }
        else{
            if(s.empty() || s.top() != '['){
                cout << 0;
                return 0;
            }
            if(input[i-1] == '[') sum += mul;
            mul /= 3;
            s.pop();
        }
    }

    if(!s.empty()) cout << 0;
    else cout << sum;

    return 0;
}