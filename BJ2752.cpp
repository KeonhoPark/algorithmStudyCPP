#include<bits/stdc++.h>
using namespace std;

int arr[3];

int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);

    for(int i = 0; i < 3; i++){
        cin >> arr[i];
    }

    sort(&arr[0], &arr[3]);

    for(int i = 0; i < 3; i++){
        cout << arr[i] << " ";
    }
}