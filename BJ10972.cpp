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

    if(next_permutation(numbers.begin(), numbers.end())){
        for(auto n : numbers) cout << n << " ";
    }
    else cout << -1;

    return 0;
}