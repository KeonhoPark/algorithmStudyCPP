#include<bits/stdc++.h>
using namespace std;

int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);

    string sentence = "";
    while(true){
        getline(cin, sentence);
        if(sentence == ".") break;
        int flag = 0;
        stack<char> s;
        for(int i = 0; i < sentence.length(); i++){
            if(sentence[i] == '('){
                s.push('(');
            }
            else if(sentence[i] == '[') {
                s.push('[');
            }
            else if(sentence[i] == ')'){
                if(!s.empty() && s.top() == '('){
                    s.pop();
                }
                else{
                    flag = 1;
                    break;
                }
            }
            else if(sentence[i] == ']'){
                if(!s.empty() && s.top() == '['){
                    s.pop();
                }
                else{
                    flag = 1;
                    break;
                }
            }
        }

        if(s.empty() && flag == 0){
            cout << "yes" << "\n";
        }
        else{
            cout << "no" << "\n";
        }
    }

    return 0;
}