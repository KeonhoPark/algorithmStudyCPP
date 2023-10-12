#include<bits/stdc++.h>
using namespace std;

int n;
int k, l;
int result;

int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);

    cin >> n >> k >> l;

    while(k != l){
        k = (k+1) / 2;
        l = (l+1) / 2;
        result++;
    }

    cout << result;

    return 0;
}