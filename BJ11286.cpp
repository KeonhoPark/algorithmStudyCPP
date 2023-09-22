#include<bits/stdc++.h>
using namespace std;

priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq;
int n;

int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);

    cin >> n;

    for(int i = 0; i < n; i++){
        int input;
        cin >> input;
        if(input == 0){
            if(pq.empty()) cout << 0 << "\n";
            else{
                cout << pq.top().second << "\n";
                pq.pop();
            }
        }
        else{
            pq.push(make_pair((int)abs(input), input));
        }
    }

    return 0;
}