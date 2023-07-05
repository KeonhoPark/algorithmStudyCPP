#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
    vector<int> poses;
    vector<int> rank;
    int n = 0;
    cin >> n;

    for(int i = 0; i < n; i++){
        int input = 0;
        cin >> input;
        poses.push_back(input);
        rank.push_back(input);
    }

    sort(rank.begin(), rank.end());
    rank.erase(unique(rank.begin(), rank.end()), rank.end());

    for(int i = 0; i < n; i++){
        int index = lower_bound(rank.begin(), rank.end(), poses[i]) - rank.begin();
        cout << index << " ";
    }

    return 0;
}