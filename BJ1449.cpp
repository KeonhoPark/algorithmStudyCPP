#include<bits/stdc++.h>
using namespace std;

int n, l;
int isBlocked[1001];
vector<int> spots;
int result;

int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);

    cin >> n >> l;
    for(int i = 0; i < n; i++){
        int input;
        cin >> input;
        spots.push_back(input);
    }

    sort(spots.begin(), spots.end());

    for(int i = 0; i < n; i++){
        if(isBlocked[spots[i]] == 1) continue;

        for(int j = spots[i]; j < spots[i] + l; j++){
            if(j > 1000) break;
            if(isBlocked[j] == 0){
                isBlocked[j] = 1;
            }
        }

        result++;
    }

    cout << result;

    return 0;
}