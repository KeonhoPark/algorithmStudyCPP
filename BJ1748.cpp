#include<bits/stdc++.h>
using namespace std;

int n;
long long result;

int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);

    int len = 0;
    int tmp = 0;

    cin >> n;

    tmp = n;
    while(tmp > 0){
        tmp /= 10;
        len++;
    }

    for(int i = 1; i < len; i++){
        result += (i * 9 * pow(10, i-1));
    }

    result += (len * (n - pow(10, len-1) + 1));
    cout << result;

    return 0;
}