#include<bits/stdc++.h>
using namespace std;

int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);

    string input;
    cin >> input;
    stack<char> s;
    int flag = 0;
    int result = 0;

    for(int i = 0; i < input.size(); i++){
        if(input[i] == '('){
            flag = 1;
            s.push(input[i]);
        }
        else if(flag == 1 && input[i] == ')'){
            s.pop();
            result += s.size();
            flag = 0;
        }
        else if(flag == 0 && input[i] == ')'){
            s.pop();
            result++;
        }
    }

    cout << result;

    return 0;
}