#include<bits/stdc++.h>
using namespace std;

int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);

    long long a;
    long long b;

    cin >> a >> b;
    if(a > b){
        cout << a - b - 1 << "\n";
        for(int i = b+1; i < a; i++) cout << i << " ";
    }
    else if(b > a){
        cout << b - a - 1 << "\n";
        for(int i = a+1; i < b; i++) cout << i << " ";
    }
    else{
        cout << 0;
    }
}