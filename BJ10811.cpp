#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
    int n, m = 0;
    cin >> n >> m;
    vector<int> arr;

    for(int i=0; i < n; i++){
        arr.push_back(i+1);
    }

    for(int k = 0; k < m; k++){
        int i, j = 0;
        cin >> i >> j;
        reverse(arr.begin()+i-1, arr.begin()+j);
    }


    for(auto it = arr.begin(); it != arr.end(); it++){
        cout << *it << " ";
    }

    return 0;
}
