#include<bits/stdc++.h>
using namespace std;

int n, k;
vector<int> temps;
long long result;

int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);

    cin >> n >> k;

    for(int i = 0; i < n; i++){
        int input;
        cin >> input;
        temps.push_back(input);
    }

    long long tmp = 0;
    for(int i = 0; i < k; i++){
        tmp += temps[i];
    }

    result = tmp;
    for(int i = k; i < n; i++){
        tmp += temps[i];
        tmp -= temps[i - k];
        result = max(result, tmp);
    }

    cout << result;

    return 0;
}