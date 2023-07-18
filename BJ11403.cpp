#include<bits/stdc++.h>
using namespace std;
#define INF 10000

int n;
int graph[100][100];

int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);
    fill(&graph[0][0], &graph[99][100], INF);

    cin >> n;

    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            int input;
            cin >> input;
            if(input == 1){
                graph[i][j] = 1;
            }
        }
    }

    for(int k = 0; k < n; k++){
        for(int i = 0; i < n; i++){
            for(int j = 0; j < n; j++){
                if(graph[i][j] < graph[i][k] + graph[k][j]){
                    graph[i][j] = graph[i][j];
                }
                else{
                    graph[i][j] = graph[i][k] + graph[k][j];
                }
            }
        }
    }

    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            if(graph[i][j] == INF){
                cout << 0 << " ";
            }
            else{
                cout << 1 << " ";
            }
        }
        cout << "\n";
    }
    
    return 0;
}