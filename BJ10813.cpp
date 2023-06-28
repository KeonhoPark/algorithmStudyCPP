#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
    int n, m = 0;
    cin >> n >> m;
    vector<int> arr(n);

    for(int i = 0; i < n; i++){
        arr[i] = i + 1;
    }

    for(int i = 0; i < m; i++){
        int x, y = 0;
        cin >> x >> y;
        swap(arr[x-1], arr[y-1]);
    }

    for(int i = 0; i < arr.size(); i++){
        cout << arr[i] << " ";
    }

    return 0;
}