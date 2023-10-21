#include<bits/stdc++.h>
using namespace std;

vector<long long> numbers;
set<long long> sums;
int n;
long long result;

bool bin_search(long long num, vector<long long> &set_v){
    long long start = 0;
    long long end = set_v.size() - 1;

    while(start <= end){
        long long mid = (start + end) / 2;
        if(num > set_v[mid]) start = mid + 1;
        else if(num < set_v[mid]) end = mid - 1;
        else if(num == set_v[mid]) return true;
    }

    return false;
}

int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);

    cin >> n;
    for(int i = 0; i < n; i++){
        long long input;
        cin >> input;
        numbers.push_back(input);
    }

    sort(numbers.begin(), numbers.end());

    for(int i = 0; i < n; i++){
        for(int j = i; j < n; j++){
            sums.insert(numbers[i] + numbers[j]);
        }
    }

    vector<long long> set_v(sums.begin(), sums.end());

    for(int i = n-1; i >= 0; i--){
        int flag = 0;
        for(int j = 0; j <= i; j++){
            long long sub = numbers[i] - numbers[j];
            if(sub <= 0) continue;
            if(bin_search(sub, set_v)){
                cout << numbers[i];
                return 0;
            }
        }
    }
    
    return 0;
}