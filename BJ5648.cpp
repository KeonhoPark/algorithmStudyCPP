#include<bits/stdc++.h>
using namespace std;

int n;
vector<long long> numbers;

long long reverse(long long num){
    long long result = 0;
    while(num > 0){
        result *= 10;
        result += (num % 10);
        num /= 10;
    }

    return result;
}

int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);

    cin >> n;
    for(int i = 0; i < n; i++){
        long long input;
        cin >> input;
        numbers.push_back(reverse(input));
    }

    sort(numbers.begin(), numbers.end());

    for(auto num : numbers) cout << num << "\n";

    return 0;
}