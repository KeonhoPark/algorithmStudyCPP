#include <iostream>
using namespace std;

int main(void){
    int a = 0;
    int b = 0;
    cin >> a;
    cin >> b;
    if(a > b) cout << '>';
    else if(a < b) cout << '<';
    else cout << '=';
    return 0;
}