#include<iostream>
#include<string>
#include<vector>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
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

// int func2(int arr[], int n)
// {
//     vector<int> ary(101);
//     for(int a : arr){
//         ary[a]++;
//     }

//     for(int i = 0; i <= 100; i++){
//         if(ary[i] == 1 && ary[100-i] == 1){
//             return 1;
//         }
//     }

//     return 0;


// }