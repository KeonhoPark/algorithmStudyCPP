#include<bits/stdc++.h>
using namespace std;

string s;
vector<string> tails;

int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);

    cin >> s;

    for(int i = 0; i < s.size(); i++){
        string tmp = "";
        for(int j = i; j < s.size(); j++){
            tmp += s[j];
        }
        tails.push_back(tmp);
    }

    sort(tails.begin(), tails.end());

    for(auto t : tails) cout << t << "\n";

    return 0;
}