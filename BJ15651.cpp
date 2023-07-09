#include<iostream>
#include<vector>
using namespace std;

int n, m = 0;
vector<int> arr;

void dfs(int root){
    if(root == m){
        for(int i = 0; i < m; i++){
            cout<<arr[i]<<" ";
        }
        cout<<"\n";
    }
    else{
        for(int i = 1; i <= n; i++){
            arr.push_back(i);
            dfs(root+1);
            arr.pop_back();
        }
    }
}

int main(){ 
    cin.tie();
    ios::sync_with_stdio(false);

    cin >> n >> m;

    dfs(0);
    return 0;
}