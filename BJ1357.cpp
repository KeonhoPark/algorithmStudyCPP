#include<bits/stdc++.h>
using namespace std;

int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);

    string a;
    string b;
    cin >> a >> b;

    reverse(a.begin(), a.end());
    reverse(b.begin(), b.end());
    string tmp = to_string(stoi(a) + stoi(b));
    reverse(tmp.begin(), tmp.end());

    cout << stoi(tmp);

    return 0;
}