#include<iostream>

using namespace std;

int main(){
    int cnt = 0;
    cin >> cnt;
    for(int i = 0; i < cnt; i++){
        int a, b = 0;
        cin >> a >> b;
        cout << a + b << endl;
    }
    
    return 0;
}