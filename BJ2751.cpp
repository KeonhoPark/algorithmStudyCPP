#include<iostream>
#include<set>
using namespace std;

int main(){
    set<int> arr;
    int n = 0;
    cin >> n;
    for(int i = 0; i < n; i++){
        int input = 0;
        cin >> input;
        arr.insert(input);
    }

    for(auto it = arr.begin(); it != arr.end(); it++){
        cout << *it << "\n";
    }
    return 0;
}