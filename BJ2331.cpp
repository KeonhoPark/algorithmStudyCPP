#include<bits/stdc++.h>
using namespace std;

long long s;
int p;
int dp[11];
vector<long long> numbers;
long long len;

long long getNext(long long cur){
    long long result = 0;
    while(cur > 0){
        result += dp[cur % 10];
        cur /= 10;
    }

    return result;
}

int getSame(long long next){
    for(int i = 0; i < numbers.size(); i++){
        if(numbers[i] == next) return i;
    }
    return -1;
}

int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);

    cin >> s >> p;
    numbers.push_back(s);

    for(int i = 0; i <= 9; i++){
        dp[i] = pow(i, p);
    }

    int next = getNext(s);
    int same_idx = getSame(next);

    while(same_idx == -1){
        numbers.push_back(next);
        next = getNext(numbers[numbers.size()-1]);
        same_idx = getSame(next);
    }

    cout << same_idx;
    
    return 0;
}