#include<bits/stdc++.h>
using namespace std;

int n;
int m;
vector<int> numbers;
int result;

int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);

    cin >> n >> m;
    for(int i = 0; i < n; i++){
        int input;
        cin >> input;
        numbers.push_back(input);
    }
    
    sort(numbers.begin(), numbers.end());

    for(int i = 0; i < numbers.size(); i++){
        for(int j = numbers.size() - 1; j > i; j--){
            if(numbers[i] + numbers[j] < m) break;
            if(numbers[i] + numbers[j] == m){
                result++;
                break;
            }
        }
    }

    cout << result;

    return 0;
}