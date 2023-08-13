#include<bits/stdc++.h>
using namespace std;

int n;
vector<int> arr;
bool occur[2000001];
int t;
int cnt;

int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);

    cin >> n;
    for(int i = 0; i < n; i++){
        int input;
        cin >> input;
        arr.push_back(input);
    }
    cin >> t;

    for(int i = 0; i < n; i++){
        if(t - arr[i] > 0 && occur[t - arr[i]]) cnt++;
        occur[arr[i]] = true;
    }

    cout << cnt;
    return 0;
}