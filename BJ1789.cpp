#include<bits/stdc++.h>
using namespace std;

long long s;
int result;

int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);

    cin >> s;

    for(long long i = 1; i <= 1000000; i++){
        long long tmp = ((1 + i) * i) / 2;

        if(tmp > s) break;
        result = i;
    }

    cout << result;

    return 0;
}