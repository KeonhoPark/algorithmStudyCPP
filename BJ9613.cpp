#include<bits/stdc++.h>
using namespace std;

int t;

int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);

    cin >> t;
    for(int a = 0; a < t; a++){
        long long result = 0;
        int n;
        vector<int> numbers;
        cin >> n;
        for(int j = 0; j < n; j++){
            int input;
            cin >> input;
            numbers.push_back(input);
        }

        for(int i = 0; i < numbers.size() - 1; i++){
            for(int j = i + 1; j < numbers.size(); j++){
                result += gcd(numbers[i], numbers[j]);
            }
        }

        cout << result << "\n";
    }

    return 0;
}