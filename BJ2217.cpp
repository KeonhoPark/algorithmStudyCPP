#include<bits/stdc++.h>
using namespace std;

int n;
int result;
vector<int> ropes;

int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);

    cin >> n;
    for(int i = 0; i < n; i++){
        int input;
        cin >> input;
        ropes.push_back(input);
    }

    sort(ropes.begin(), ropes.end());

    for(int i = 0; i < ropes.size(); i++){
        int tmp = ropes[i] * (n - i);
        if(tmp > result) result = tmp;
    }

    cout << result;

    return 0;
}