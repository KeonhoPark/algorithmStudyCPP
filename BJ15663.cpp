#include<iostream>
#include<vector>
#include<set>
#include<algorithm>
using namespace std;

int n, m = 0;
vector<int> arr;
set<vector<int>> arrList;

void dfs(int root, vector<int> &numbers, vector<int> visited){
    if(root == m){
        if(arrList.find(arr) == arrList.end()){
            arrList.insert(arr);
            for(int i = 0; i < m; i++){
                cout << arr[i] << " ";
            }
            cout << "\n";
        }
    }
    else{
        for(int i = 0; i < numbers.size(); i++){
            if(visited[i] == 0){
                visited[i] = 1;
                arr.push_back(numbers[i]);
                dfs(root+1, numbers, visited);
                visited[i] = 0;
                arr.pop_back();
            }
        }
    }
}

int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);

    cin >> n >> m;
    vector<int> numbers(n);
    vector<int> visited(n);

    for(int i = 0; i < n; i++){
        cin >> numbers[i];
    }

    sort(numbers.begin(), numbers.end());
    dfs(0, numbers, visited);

    return 0;
}