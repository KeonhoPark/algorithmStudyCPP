#include<iostream>
#include<vector>
#include<set>
#include<string>
using namespace std;

int k = 0;
vector<int> visited(10);
vector<int> res;
set<vector<int>> resArr;

void dfs(int root, vector<string> dArr, int prev){
    if(root == k+1){
        if(resArr.find(res) == resArr.end()){
            resArr.insert(res);
        }
    }

    else{
        for(int i = 0; i < 10; i++){
            if(visited[i] == 0){
                if(root > 0){
                    if((prev < i && dArr[root] == ">") || (prev > i && dArr[root] == "<")){
                        continue;
                    }
                }
                visited[i] = 1;
                res.push_back(i);
                dfs(root+1, dArr, i);
                visited[i] = 0;
                res.pop_back();
            }
        }
    }
}

int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);

    cin >> k;
    vector<string> dArr(k+1);
    for(int i = 1; i <= k; i++){
        cin >> dArr[i];
    }

    dfs(0, dArr, -1);

    auto start = resArr.begin();
    auto last = --resArr.end();

    for(auto a : (*last)){
        cout << a;
    }

    cout << "\n";

    for(auto a : (*start)){
        cout << a;
    }

    return 0;
}