#include<bits/stdc++.h>
using namespace std;

int n;
vector<long long> trees;
vector<long long> distances;
long long result;

int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);

    cin >> n;

    for(int i = 0; i < n; i++){
        int input;
        cin >> input;
        trees.push_back(input);
    }

    for(int i = 1; i < n; i++){
        distances.push_back(trees[i] - trees[i-1]);
    }

    long long GCD = distances[0];
    for(int i = 1; i <  n-1; i++){
        GCD = gcd(GCD, distances[i]);
    }

    for(int i = 0; i < n-1; i++){
        result += ((distances[i] / GCD) - 1);
    }

    cout << result;

    return 0;
}