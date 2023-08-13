#include<bits/stdc++.h>
using namespace std;

int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);

    int arr[] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0};

    long num = 1;
    for(int i = 0; i < 3; i++){
        int input;
        cin >> input;
        num *= input;
    }

    while(num > 0){
        arr[num % 10]++;
        num /= 10;
    }

    for(auto n : arr){
        cout << n << "\n";
    }

}