#include<bits/stdc++.h>
using namespace std;

int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);

    stack<char> s;
    int score;
    string input;
    cin >> input;

    if(input[0] == '('){
        score = 2;
        s.push(input[0]);
    }
    else if(input[0] == '['){
        score = 3;
        s.push(input[0]);
    }
    else{
        cout << 0;
        return 0;
    }

    char isError = 0;
    char isFirst = 0;
    for(int i = 1; i < input.size(); i++){
        if(input[i] == '('){
            if()
            s.push(input[i]);
            score *= 2;
        }
        else if(input[i] == '['){
            s.push(input[i]);
            score *= 3;
        }
        else{
            if(s.empty()){
                flag = 1;
                break;
            }
            if((s.top() == '(' && input[i] == ']') || (s.top() == '[' && input[i] == ')')){
                flag = 1;
                break;
            }
            s.pop();
        }
    }

    if(isError) cout << 0;
    else cout << score;

    return 0;
}