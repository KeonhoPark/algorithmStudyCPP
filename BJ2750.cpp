#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
    int n = 0;
    cin >> n;
    vector<int> arr;
    for(int i = 0; i < n; i++){
        int input = 0;
        cin >> input;
        arr.push_back(input);
    }

    sort(arr.begin(), arr.end());
    for(auto a : arr){
        cout << a << "\n";
    }
}