#include<bits/stdc++.h>
using namespace std;

int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);

    int n = 0;
    int y = 0;
    int m = 0;
    cin >> n;

    for(int i = 0; i < n; i++){
        int input;
        cin >> input;
        input++;
        
        y += ((input / 30) * 10);
        if(input % 30 > 0) y += 10;
        m += ((input / 60) * 15);
        if(input % 60 > 0) m += 15;
    }

    if(m < y) cout << "M " << m;
    else if(m > y) cout << "Y " << y;
    else if(m == y) cout << "Y M " << y;

    return 0;
}