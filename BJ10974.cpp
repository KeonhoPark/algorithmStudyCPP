#include<bits/stdc++.h>
using namespace std;

int n;
int numbers[9];
deque<int> dq;

void dfs(int root){
    if(root == n){
        for(auto num : dq) cout << num << " ";
        cout << "\n";
        return;
    }

    for(int i = 1; i <= n; i++){
        if(numbers[i] == 0){
            dq.push_back(i);
            numbers[i] = 1;
            dfs(root + 1);
            dq.pop_back();
            numbers[i] = 0;
        }
    }
}

int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);

    cin >> n;

    dfs(0);

    return 0;
}