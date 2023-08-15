#include<bits/stdc++.h>
using namespace std;

int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);

    queue<int> q;
    int n, k = 0;
    cin >> n >> k;

    for(int i = 1; i <= n; i++){
        q.push(i);
    }

    cout << "<";

    int index = 1;
    while (!q.empty()){
        if(index % k == 0){
            int f = q.front();
            q.pop();
            if(!q.empty()) cout << f << ", ";
            else cout << f;
        }
        else{
            int f = q.front();
            q.pop();
            q.push(f);
        }
        index++;
    }

    cout << ">";
    return 0;
}