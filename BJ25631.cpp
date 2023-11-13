#include<bits/stdc++.h>
using namespace std;

int n;
vector<long long> sizes;
long long states[1001];
int result;

int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);

    cin >> n;

    for(int i = 0; i < n; i++){
        long long input;
        cin >> input;
        sizes.push_back(input);
    }

    sort(sizes.begin(), sizes.end());

    for(int i = 0; i < sizes.size() - 1; i++){
        for(int j = 1; j < sizes.size(); j++){
            if(sizes[i] < sizes[j] && states[j] == 0){
                states[j] = sizes[i];
                states[i] = -1;
                break;
            }
        }
    }

    for(int i = 0; i < n; i++){
        if(states[i] != -1) result++;
    }

    cout << result;

    return 0;
}