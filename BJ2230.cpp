#include<bits/stdc++.h>
using namespace std;

int n, m;
vector<long long> numbers;
long long result = 10000000000;

int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);

    cin >> n >> m;

    for(int i = 0; i < n; i++){
        long long input;
        cin >> input;
        numbers.push_back(input);
    }

    sort(numbers.begin(), numbers.end());

    int head = 0;
    int tail = 0;

    while(head <= tail && tail < n){
        long long tmp = abs(numbers[head] - numbers[tail]);
        if(tmp < m) tail++;
        else{
            result = min(result, tmp);
            head++;
        }
    }

    cout << result;

    return 0;
}