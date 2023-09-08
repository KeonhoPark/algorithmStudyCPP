#include<bits/stdc++.h>
using namespace std;

int n;
priority_queue<int, vector<int>, greater<int>> pq;

int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);

    cin >> n;
    for(int i = 0; i < n; i++){
        int input;
        cin >> input;
        if(input == 0){
            if(pq.empty()){
                cout << 0 << "\n";
                continue;
            }
            else{
                cout << pq.top() << "\n";
                pq.pop();
            }
        }
        else{
            pq.push(input);
        }
    }

    return 0;
}