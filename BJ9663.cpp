#include<bits/stdc++.h>
using namespace std;

int n;
int cnt = 0;
vector<int> posArr(15);

bool promising(int row){
    for(int i = 0; i < row; i++){
        if((posArr[row] == posArr[i]) || abs(posArr[row] - posArr[i]) == abs(row - i)){
            return false;
        }
    }
    return true;
}

void dfs(int root){
    if(root == n){
        cnt++;
        return;
    }

    else{
        for(int i = 0; i < n; i++){
            posArr[root] = i;
            if(promising(root) == true){
                dfs(root + 1);
            }
        }
    }
}

int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);

    cin >> n;
    dfs(0);
    cout << cnt;

    return 0;
}