#include<bits/stdc++.h>
using namespace std;

int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);

    int n, m;
    int result = 0;
    deque<int> dq;
    cin >> n >> m;
    for(int i = 1; i <= n; i++){
        dq.push_back(i);
    }

    for(int i = 0; i < m; i++){
        int input;
        cin >> input;

        if(input == dq.front()) {
            dq.pop_front();
        }
        else{
            int index = 0;
            for(int j = 0; j < dq.size(); j++){
                if(dq[j] == input) break;
                index++;
            }

            if(index <= (dq.size() - 1 - index)){
                while(input != dq.front()){
                    dq.push_back(dq.front());
                    dq.pop_front();
                    result++;
                }
            }
            else{
                while(input != dq.front()){
                    dq.push_front(dq.back());
                    dq.pop_back();
                    result++;
                }
            }
            dq.pop_front();
        }
    }

    cout << result;
    return 0;
}