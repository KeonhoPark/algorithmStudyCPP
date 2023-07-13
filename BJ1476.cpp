#include<bits/stdc++.h>
using namespace std;

int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);

    int year = 1;
    int eIn, sIn, mIn;
    int e = 1;
    int s = 1;
    int m = 1;
   
    cin >> eIn >> sIn >> mIn;

    while (true){
        if(e == eIn && s == sIn && m == mIn){
            cout << year;
            break;
        }
        year++;
        e++;
        s++;
        m++;

        if(e > 15) e %= 15;
        if(s > 28) s %= 28;
        if(m > 19) m %= 19;
    }
    
    return 0;
}