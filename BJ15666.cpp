#include<iostream>
#include<vector>
#include<set>
#include<algorithm>
using namespace std;

int n, m;
vector<int> arr;
set<vector<int>> arrList;

void dfs(int root, vector<int> numbers, int start){
    if(root == m){
        if(arrList.find(arr) == arrList.end()){
            for(int i = 0; i < m; i++){
                cout << arr[i] << " ";
            }
            cout << "\n";
            arrList.insert(arr);
        }
    }
    else{
        for(int i = start; i < n; i++){
                arr.push_back(numbers[i]);
                dfs(root+1, numbers, i);
                arr.pop_back();
        }
    }
}

int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);
    cin >> n >> m;
    vector<int> numbers(n);

    for(int i = 0; i < n; i++){
        cin >> numbers[i];
    }

    sort(numbers.begin(), numbers.end());
    dfs(0, numbers, 0);
    return 0;
}