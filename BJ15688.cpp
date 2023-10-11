#include<bits/stdc++.h>
using namespace std;

int n;
vector<int> numbers;

int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);

    cin >> n;
    for(int i = 0; i < n; i++){
        int input;
        cin >> input;
        numbers.push_back(input);
    }

    sort(numbers.begin(), numbers.end());

    for(auto num : numbers) cout << num << "\n";

    return 0;
}