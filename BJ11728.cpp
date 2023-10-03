#include<bits/stdc++.h>
using namespace std;

int a, b;
multiset<int> s;

int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);

    cin >> a >> b;
    for(int i = 0; i < a + b; i++){
        int input;
        cin >> input;
        s.insert(input);
    }

    for(auto n : s) cout << n << " ";

    return 0;
}