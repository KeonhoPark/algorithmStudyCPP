#include<bits/stdc++.h>
using namespace std;

int n;
vector<int> numbers;
int result = 0;

int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);

    cin >> n;
    for(int i = 0; i < n; i++){
        int input;
        cin >> input;
        numbers.push_back(input);
    }

    int prev = numbers[0];
    for(int i = 1; i < n; i++){
        if(numbers[i] <= prev) result++;
        if(i == n - 1 && numbers[i] >= numbers[0]) result++;

        prev = numbers[i];
    }

    cout << result;

    return 0;
}