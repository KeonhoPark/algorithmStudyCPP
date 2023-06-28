#include<iostream>
#include<vector>
using namespace std;

int main(){
    int n, m = 0;
    cin >> n >> m;
    vector<int> arr(n);

    for(int i = 0; i < m; i++){
        int start, end, ballNum = 0;
        cin >> start >> end >> ballNum;
        for(int i = start-1; i < end; i++){
            arr[i] = ballNum;
        }
    }

    for(int i = 0; i < arr.size(); i++){
        cout << arr[i] << " ";
    }
    return 0;
}