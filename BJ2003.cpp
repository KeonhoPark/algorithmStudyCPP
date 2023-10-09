#include<bits/stdc++.h>
using namespace std;

int n;
long long m;
vector<int> numbers;
int result;
int l, r = 0;

int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);

    cin >> n >> m;

    for(int i = 0; i < n; i++){
        int input;
        cin >> input;
        numbers.push_back(input);
    }

    for(int i = 0; i < n; i++){
        long long total = 0;
        for(int j = i; j < n; j++){
            total += numbers[j];
            if(total > m) break;
            if(total == m) result++;
        }
    }

    cout << result;

    return 0;
}