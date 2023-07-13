#include<bits/stdc++.h>
using namespace std;

int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);

    int n;
    cin >> n;
    queue<int> q;
    for(int i = 0; i < n; i++){
        string input;
        cin >> input;
        if(input == "push"){
            int num;
            cin >> num;
            q.push(num);
        }
        else if(input == "pop"){
            if(q.empty() == true) cout << -1 << "\n";
            else{
                cout << q.front() << "\n";
                q.pop();
            }
        }
        else if(input == "size"){
            cout << q.size() << "\n";
        }
        else if(input == "empty"){
            if(q.empty() == true) cout << 1 << "\n";
            else cout << 0 << "\n";

        }
        else if(input == "front"){
            if(q.empty() == true) cout << -1 << "\n";
            else cout << q.front() << "\n";
        }
        else if(input == "back"){
            if(q.empty() == true) cout << -1 << "\n";
            else cout << q.back() << "\n";
        }
    }

    return 0;
}