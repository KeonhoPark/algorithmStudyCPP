#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int n, m = 0;
vector<int> arr;

void dfs(int root, vector<int> &numbers, vector<int> &visited, int start){
    if(root == m){
        for(int i = 0; i < m; i++){
            cout << arr[i] << ' ';
        }
        cout << "\n";
    }
    else{
        for(int i = start; i < numbers.size(); i++){
            if(visited[i] == 0){
                visited[i] = 1;
                arr.push_back(numbers[i]);
                dfs(root+1, numbers, visited, i+1);
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
    vector<int> numbers(n);
    vector<int> visited(n);

    for(int i = 0; i < n; i++){
        cin >> numbers[i];
    }

    sort(numbers.begin(), numbers.end());
    dfs(0, numbers, visited, 0);

    return 0;
}