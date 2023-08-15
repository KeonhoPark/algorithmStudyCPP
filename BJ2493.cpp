#include<bits/stdc++.h>
using namespace std;

int res[500001];

int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);

    int n = 0;
    stack<pair<int, int>> s;
    s.push(make_pair(100000001, 0));
    cin >> n;

    for(int i = 1; i <= n; i++){
        int input;
        cin >> input;

        while(s.top().first < input){
            s.pop();
        }

        cout << s.top().second << " ";
        s.push(make_pair(input, i));
    }

    return 0;
}