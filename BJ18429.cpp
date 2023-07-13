#include<bits/stdc++.h>
using namespace std;

int kitNum, dc;
int res = 0;
vector<int> kitArr; 

void dfs(int root, int total, vector<int> visited){
    if(root == kitNum){
        res++;
        return;
    }
    else{
        for(int i = 0; i < kitNum; i++){
            if(visited[i] == 0){
                int t = kitArr[i] - dc;
                if(total + t < 500) continue;
                visited[i] = 1;
                dfs(root+1, total + t, visited);
                visited[i] = 0;
            }
        }
    }
}

int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);

    cin >> kitNum >> dc;
    vector<int> visited(kitNum);
    for(int i = 0; i < kitNum; i++){
        int k;
        cin >> k;
        kitArr.push_back(k);
    }

    dfs(0, 500, visited);

    cout << res;

    return 0;
}