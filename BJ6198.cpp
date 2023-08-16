#include<bits/stdc++.h>
using namespace std;

int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);

    int n;
    long long res = 0;
    stack<long long> s;
    cin >> n;

    for(int i = 0; i < n; i++){
        long long input;
        cin >> input;

        while(!s.empty() && input >= s.top()){
            s.pop();
        }
        s.push(input);
        res += (s.size()-1);
    }

    cout << res;

    return 0;
}