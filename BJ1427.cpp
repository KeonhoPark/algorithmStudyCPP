#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
    int n = 0;
    vector<int> arr;
    cin >> n;
    while(n > 0){
        arr.push_back(n % 10);
        n /= 10;
    }

    sort(arr.begin(), arr.end(), greater<>());
    for(auto it = arr.begin(); it != arr.end(); it++){
        cout << *it;
    }
}