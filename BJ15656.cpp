#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int n, m = 0;
vector<int> arr;

void dfs(int root, vector<int> &numbers){
    if(root == m){
        for(int a : arr){
            cout << a << " ";
        }
        cout << "\n";
    }
    else{
        for(int i = 0; i < numbers.size(); i++){
            arr.push_back(numbers[i]);
            dfs(root+1, numbers);
            arr.pop_back();
        }
    }
}

int main(){
    cin.tie();
    ios::sync_with_stdio(false);
    cin >> n >> m;
    vector<int> numbers(n);

    for(int i = 0; i < n; i++){
        cin >> numbers[i];
    }

    sort(numbers.begin(), numbers.end());
    dfs(0, numbers);

    return 0;
}