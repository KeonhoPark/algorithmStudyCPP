#include<bits/stdc++.h>
using namespace std;

int n, m;
vector<int> numbers;
int l, r;
long long total;
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

    total = numbers[0];
    while(l <= r && r < n){
        if(total > m){
            total -= numbers[l++];
            
            if(l > r){
                r = l;
                total = numbers[l];
            }
        }
        else if(total == m){
            result++;
            total += numbers[++r];
        }
        else if(total < m){
            total += numbers[++r];
        }
    }

    cout << result;

    return 0;
}