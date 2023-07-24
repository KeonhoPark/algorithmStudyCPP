#include<bits/stdc++.h>
using namespace std;

void sol(int n, int start, int end){
    if(n == 1) {
        cout << start << " " << end << "\n";
    }
    else{
        sol(n-1, start, 6 - start - end);
        cout << start << " " << end << "\n";
        sol(n-1, 6 - start - end, end);
    }
}

int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);

    int n;
    cin >> n;

    cout << (int)(pow(2, n) - 1) << "\n";
    sol(n, 1, 3);

    return 0;
}