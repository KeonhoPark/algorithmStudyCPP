#include<bits/stdc++.h>
using namespace std;

int n;
deque<pair<int, int>> dq;

int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);

    cin >> n;

    for(int i = 1; i <= n; i++){
        int input;
        cin >> input;
        dq.push_back(make_pair(i, input));
    }

    while(!dq.empty()){
        int cnt = dq.front().second;
        cout << dq.front().first << " ";
        dq.pop_front();
        
        if(cnt > 0){
            for(int i = 0; i < cnt - 1; i++){
                dq.push_back(dq.front());
                dq.pop_front();
            }
        }
        else{
            for(int i = 0; i < cnt * (-1); i++){
                dq.push_front(dq.back());
                dq.pop_back();
            }
        }
    }

    return 0;
}