#include<bits/stdc++.h>
using namespace std;

int n, s = 0;
int cnt = 0;
vector<int> numArr;
vector<int> visited;

void dfs(int root, int total){
    if(root == n){
        return;
    }
    else{
        if(total + numArr[root] == s){
            cnt++;
        }
        dfs(root+1, total + numArr[root]);
        dfs(root+1, total);
    }
}

int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);

    cin >> n >> s;
    for(int i = 0; i < n; i++){
        int input;
        cin >> input;
        numArr.push_back(input);
    }

    dfs(0, 0);
    cout << cnt;
    return 0;
}