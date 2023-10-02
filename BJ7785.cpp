#include<bits/stdc++.h>
using namespace std;

int n;
set<string, greater<string>> people;

int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);

    cin >> n;
    for(int i = 0; i < n; i++){
        string name, status;
        cin >> name >> status;

        if(status == "enter") people.insert(name);
        else people.erase(name);
    }

    for(auto p : people) cout << p << "\n";

    return 0;
}