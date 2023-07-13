#include<bits/stdc++.h>
using namespace std;

int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);

    stack<int> s;
    int n = 0;
    cin >> n;

    for(int i = 0; i < n; i++){
        string input;
        cin >> input;

        if(input == "push"){
            int num;
            cin >> num;
            s.push(num);
        }
        else if(input == "pop"){
            if(s.empty()) cout << -1 << "\n";
            else{
                int res = s.top();
                s.pop();
                cout << res << "\n";
            }
        }
        else if(input == "size"){
            cout << s.size() << "\n";
        }
        else if(input == "empty"){
            if(s.empty() == true) cout << 1 << "\n";
            else cout << 0 << "\n";
        }
        else if(input == "top"){
            if(s.empty() == true) cout << -1 << "\n";
            else cout << s.top() << "\n";
        }
    }

    return 0;
}