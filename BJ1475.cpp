#include<bits/stdc++.h>
using namespace std;

int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);

    int arr[] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    int num = 0;
    cin >> num;

    while(num > 0){
        arr[num % 10]++;
        num /= 10;
    }

    int sixNineSum = arr[6] + arr[9];
    if(sixNineSum % 2 == 0){
        arr[6] = sixNineSum / 2;
        arr[9] = sixNineSum / 2;
    }
    else{
        arr[6] = (sixNineSum / 2) + 1;
        arr[9] = (sixNineSum / 2) + 1;
    }

    int mx = -1;
    for(int i = 0; i < 10; i++){
        if(arr[i] > mx) mx = arr[i];
    }

    cout << mx;
    
    return 0;
}