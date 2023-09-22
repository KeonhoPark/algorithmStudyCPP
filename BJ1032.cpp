#include<bits/stdc++.h>
using namespace std;

int n;
int len;
string std_word;
vector<string> inputs;

int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);

    cin >> n;

    for(int i = 0; i < n; i++){
        string input;
        cin >> input;
        if(i == 0){
            len = input.size();
            std_word = input;
        }
        inputs.push_back(input);
    }

    for(int i = 0; i < len; i++){
        int flag = 0;
        for(int j = 1; j < inputs.size(); j++){
            if(inputs[0][i] != inputs[j][i]){
                cout << '?';
                flag = 1;
                break;
            }
        }
        if(flag == 0) cout << std_word[i];
    }

    return 0;
}