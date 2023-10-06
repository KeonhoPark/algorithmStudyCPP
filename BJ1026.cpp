#include<bits/stdc++.h>
using namespace std;

int n;
vector<int> a;
vector<int> b;
int result;

int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);

    cin >> n;

    for(int i = 0; i < n; i++){
        int input;
        cin >> input;
        a.push_back(input);
    }

    for(int i = 0; i < n; i++){
        int input;
        cin >> input;
        b.push_back(input);
    }

    sort(a.begin(), a.end());
    sort(b.begin(), b.end(), greater<int>());

    for(int i = 0; i < n; i++){
        result += a[i] * b[i];
    }

    cout << result;

    return 0;
}