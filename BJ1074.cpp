#include<bits/stdc++.h>
using namespace std;

int sol(int n, int r, int c){
    if(n == 0){
        return 0;
    } 
    else{
        int half = pow(2, n) / 2;
        if(r < half && c < half) return sol(n-1, r, c);
        else if(r >= half && c < half) return (2 * half * half) + sol(n-1, r - half, c);
        else if(r < half && c >= half) return (half * half) + sol(n-1, r, c - half);
        else return (3 * half * half) + sol(n-1, r - half, c - half);
    }
}

int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);

    int n, r, c = 0;
    cin >> n >> r >> c;

    cout << sol(n, r, c);

    return 0;
}