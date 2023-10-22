#include<bits/stdc++.h>
using namespace std;

int c, s;
vector<long long> snacks;

long long getTotal(long long len){
    long long total = 0;
    for(int i = 0; i < snacks.size(); i++){
        total += (snacks[i] / len);
    }

    return total;
}

long long bin_search(){
    long long start = 1;
    long long end = snacks[snacks.size() - 1];

    while(start <= end){
        long long mid = (start + end) / 2;
        long long total = getTotal(mid);

        if(total < c){
            end = mid - 1;
        }
        else if(total >= c){
            start = mid + 1;
        }
    }

    return start - 1;
}

int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);

    cin >> c >> s;
    
    long long t = 0;
    for(int i = 0; i < s; i++){
        long long input;
        cin >> input;
        t += input;
        snacks.push_back(input);
    }

    if(t < c){
        cout << 0;
        return 0;
    }

    sort(snacks.begin(), snacks.end());
    cout << bin_search();

    return 0;
}