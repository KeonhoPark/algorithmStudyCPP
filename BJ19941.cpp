#include<bits/stdc++.h>
using namespace std;

int n, k, result;
int visited[20001];

int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);

    string input;
    cin >> n >> k >> input;

    for(int i = 0; i < n; i++){
        if(input[i] == 'P'){
            for(int j = i-k; j <= i+k; j++){
                if((j < 0) || (j >= n)) continue;
                if(input[j] == 'H' && visited[j] == 0){
                    visited[j] = 1;
                    result++;
                    break;
                }
            }
        }
    }

    cout << result;

    return 0;
}