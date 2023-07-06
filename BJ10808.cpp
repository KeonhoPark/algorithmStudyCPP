#include<iostream>
#include<string>
#include<vector>
using namespace std;

int main(){
    vector<int> arr(26);
    string input;
    cin >> input;
    for(char c : input){
        arr[c - 'a']++;
    }

    for(auto a : arr){
        cout << a << " ";
    }

    return 0;   
}