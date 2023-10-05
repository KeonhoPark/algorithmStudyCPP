#include<bits/stdc++.h>
using namespace std;

string s;
int zero, one;

int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);

    cin >> s;

    for(int i = 0; i < s.size(); i++){
        if(s[i] == '0') zero++;
        else one++;
    }

    int cnt = 0;
    for(int i = 0; i < s.size(); i++){
        if(cnt == one / 2) break;
        if(s[i] == '1'){
            s[i] = 'n';
            cnt++;
        }
    }

    cnt = 0;
    for(int i = s.size() - 1; i >= 0; i--){
        if(cnt == zero / 2) break;
        if(s[i] == '0'){
            s[i] = 'n';
            cnt++;
        }
    }

    for(int i = 0; i < s.size(); i++){
        if(s[i] == 'n') continue;
        cout << s[i];
    }

    return 0;
}