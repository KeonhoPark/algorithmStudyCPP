#include<iostream>
#include<vector>
using namespace std;

int n, m = 0;
vector<int> arr;

void dfs(int root, int start){
    if(root == m){
        for(int i = 0; i < m; i++){
            cout<<arr[i]<<" ";
        }
        cout<<"\n";
    }
    else{
        for(int i = start; i <= n; i++){
            arr.push_back(i);
            dfs(root+1, i);
            arr.pop_back();
        }
    }
}

int main(){ 
    cin.tie();
    ios::sync_with_stdio(false);

    cin >> n >> m;

    dfs(0, 1);
    return 0;
}