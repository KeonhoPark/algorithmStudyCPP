#include<iostream>
#include<vector>
using namespace std;

int n, m = 0;
vector<int> arr;

void dfs(int root, vector<int> &visited){
    if(root == m){
        for(int i = 0; i < m; i++){
            cout<<arr[i]<<" ";
        }
        cout<<"\n";
    }
    else{
        for(int i = 1; i <= n; i++){
            if(visited[i] == 0){
                visited[i] = 1;
                arr.push_back(i);
                dfs(root+1, visited);
                visited[i] = 0;
                arr.pop_back();
            }
        }
    }
}

int main(){
    cin.tie();
    ios::sync_with_stdio(false);
    cin >> n >> m;
    vector<int> visited(n+1);

    dfs(0, visited);

    return 0;
}