#include<bits/stdc++.h>
using namespace std;

int n;
vector<int> v;

int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);

    cin >> n;
    for(int i = 0; i < n; i++){
        int input;
        cin >> input;
        v.push_back(input);
    }

    sort(v.begin(), v.end(), greater<int>());

    for(auto x : v) cout << x << "\n";

    return 0;
}