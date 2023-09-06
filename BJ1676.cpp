#include<bits/stdc++.h>
using namespace std;

int n;
int result;

int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);

    cin >> n;

    for(int i = 1; i <= n; i++){
        if(i % 125 == 0) result += 3;
        else if(i % 25 == 0) result += 2;
        else if(i % 5 == 0) result++;
    }

    cout << result;

    return 0;
}