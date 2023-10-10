#include<bits/stdc++.h>
using namespace std;

int n;
vector<int> rings;

int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);

    cin >> n;

    for(int i = 0; i < n; i++){
        int input;
        cin >> input;
        rings.push_back(input);
    }

    for(int i = 1; i < n; i++){
        int l = gcd(rings[0], rings[i]);
        cout << rings[0] / l << "/" << rings[i] / l << "\n";
    }

    return 0;
}