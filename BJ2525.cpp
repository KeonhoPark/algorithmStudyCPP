#include<iostream>
using namespace std;

int main(){
    int a = 0;
    int b = 0;
    int c = 0;

    cin >> a; cin >> b; cin >> c;

    a += ((b + c) / 60);
    b = ((b + c) % 60);

    if(a >= 0){
        a %= 24;
    }

    cout << a << " " << b;

    return 0;
}