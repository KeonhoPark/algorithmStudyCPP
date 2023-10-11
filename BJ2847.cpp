#include<bits/stdc++.h>
using namespace std;

int n;
int scores[101];
int result;

int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);

    cin >> n;
    for(int i = 1; i <= n; i++){
        cin >> scores[i];
    }

    int next = scores[n];

    for(int i = n - 1; i >= 1; i--){
        if(scores[i] < next){
            next = scores[i];
            continue;
        }

        result += scores[i] - (next - 1);
        next = next - 1;
    }

    cout << result;

    return 0;
}