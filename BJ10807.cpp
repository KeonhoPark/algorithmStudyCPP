#include<iostream>
#include<vector>
using namespace std;

int main(){
    int n = 0;
    int count = 0;
    cin >> n;
    vector<int> arr;

    for(int i = 0; i < n; i++){
        int input = 0;
        cin >> input;
        arr.push_back(input);
    }

    int input = 0;
    cin >> input;

    for(int i = 0; i < arr.size(); i++){
        if(input == arr[i]){
            count++;
        }
    }

    cout << count;
}