#include<bits/stdc++.h>
using namespace std;

int n;
set<int> s;

int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);

    cin >> n;
    for(int i = 0; i < n; i++){
        int input;
        cin >> input;
        s.insert(input);
    }

    for(auto n : s) cout << n << " ";

}