#include <iostream>
using namespace std;

int getMax(int n1, int n2, int n3){
    if(n1 > n2 && n1 > n3){
        return n1;
    }
    else if(n2 > n1 && n2 > n3){
        return n2;
    }
    else if(n3 > n1 && n3 > n2){
        return n3;
    }
}

int main(){

    int n1, n2, n3 = 0;
    cin >> n1 >> n2 >> n3;

    if(n1 == n2 && n1 == n3 && n2 == n3){
        cout << 10000 + (n1 * 1000);
    }
    else if(n1 == n2 && n2 != n3){
        cout << 1000 + (n1 * 100);
    }
    else if(n1 == n3 && n2 != n3){
        cout << 1000 + (n1 * 100);
    }
    else if(n2 == n3 && n1 != n3){
        cout << 1000 + (n2 * 100);
    }
    else{
        cout << max(n1, max(n2, n3)) * 100;
    }
}