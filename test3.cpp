#include<bits/stdc++.h>
using namespace std;

vector<vector<int>> graph(2);

int main(){
    for(int i = 0; i < 2; i++){
        for(int j = 0; j < 5; j++){
            graph[i].push_back((i+1) * (j+1));
        }
    }

    for(int i = 0; i < 2; i++){
        for(int j = 0; j < 5; j++){
            cout << graph[i][j] << " ";
        }
        cout << "\n";
    }
    
}