#include<bits/stdc++.h>
using namespace std;

int alpCount[26];

int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);

    deque<char> dq;
    string input;
    cin >> input;

    for(int i = 0; i < input.size(); i++){
        alpCount[input[i] - 'A']++;
    }

    int flag = 0;
    int odd = -1;
    for(int i = 0; i < 26; i++){
        if(flag == 0 && alpCount[i] % 2 == 1){
            flag = 1;
            odd = i;
            alpCount[i] /= 2;
        }
        else if(flag == 1 && alpCount[i] % 2 == 1){
            cout << "I'm Sorry Hansoo";
            return 0;
        }
        else if(alpCount[i] % 2 == 0) alpCount[i] /= 2;
    }

    for(int i = 0; i < 26; i++){
        for(int j = 0; j < alpCount[i]; j++){
            cout << (char)(i + 'A');
            dq.push_front((char)(i + 'A'));
        }
    }

    if(odd != -1) cout << (char)(odd + 'A');

    while (!dq.empty()){
        cout << dq.front();
        dq.pop_front();
    }

    return 0;
}