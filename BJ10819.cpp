#include<bits/stdc++.h>
using namespace std;

int n;
vector<int> numbers;
int visited[9];
deque<int> numbers_tmp;
int mx = -1;

void dfs(int root){
    if(root == n){
        int tmp = 0;
        for(int j = 0; j < n - 1; j++){
            if(numbers_tmp[j] >= numbers_tmp[j + 1]) tmp += (numbers_tmp[j] - numbers_tmp[j + 1]);
            else tmp += (numbers_tmp[j + 1] - numbers_tmp[j]);
        }

        mx = max(mx, tmp);
    }

    for(int i = 0; i < n; i++){
        if(visited[i] == 0){
            numbers_tmp.push_back(numbers[i]);
            visited[i] = 1;
            dfs(root + 1);
            numbers_tmp.pop_back();
            visited[i] = 0;
        }
    }
}

int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);

    cin >> n;
    
    for(int i = 0; i < n; i++){
        int input;
        cin >> input;
        numbers.push_back(input);
    }

    dfs(0);

    cout << mx;

    return 0;
}