#include<bits/stdc++.h>
using namespace std;

int n;
int m;
int result;
string input;

int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);

    cin >> n >> m >> input;

    for(int i = 0; i < m-2; i++){
        int cnt = 0;
        if(input[i] == 'I' && input[i+1] == 'O' && input[i+2] == 'I'){
            while(input[i+1] == 'O' && input[i+2] == 'I'){
                cnt++;
                if(cnt == n){
                    result++;
                    cnt--;
                }
                i += 2;
            }
        }
    }

    cout << result;

    return 0;
}