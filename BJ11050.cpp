#include<bits/stdc++.h>
using namespace std;

int biNomial(int n, int k){
    if(k == 0 || k == n) return 1;
    else return biNomial(n-1, k-1) + biNomial(n-1, k);
}

int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);

    int n, k;
    cin >> n >> k;
    cout << biNomial(n, k);

    return 0;
}