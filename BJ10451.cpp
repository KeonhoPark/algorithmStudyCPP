#include<bits/stdc++.h>
using namespace std;

int t;

int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);

    cin >> t;
    for(int a = 0; a < t; a++){
        int result = 0;
        int numbers[1001];
        int visited[1001] = {0,};

        int n;
        cin >> n;
        for(int i = 1; i <= n; i++){
            cin >> numbers[i];
        }

        for(int i = 1; i <= n; i++){
            if(visited[i] == 0){
                visited[i] = 1;
                int dest = numbers[i];

                while(visited[dest] == 0){
                    visited[dest] = 1;
                    dest = numbers[dest];
                }

                result++;
            }
        }

        cout << result << "\n";
    }

    return 0;
}