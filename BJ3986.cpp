#include<bits/stdc++.h>
using namespace std;

int n;
int cnt;

int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);

    cin >> n;

    for(int i = 0; i < n; i++){
        string input;
        cin >> input;

        stack<char> s;

        for(int j = 0; j < input.size(); j++){
            if(s.empty()) s.push(input[j]);

            else if(input[j] == s.top()) s.pop();
            else s.push(input[j]);
        }

        if(s.empty()) cnt++;
    }

    cout << cnt;
    return 0;
}