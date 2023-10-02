#include<bits/stdc++.h>
using namespace std;

vector<int> v;
int n, k;

int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);

    cin >> n >> k;

    for(int i = 0; i < n; i++){
        int input;
        cin >> input;
        v.push_back(input);
    }

    sort(v.begin(), v.end());

    cout << v[k-1];

    return 0;
}