#include<bits/stdc++.h>
using namespace std;

int n;
int result;
int l, r = 1;

int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);

    cin >> n; 

    while(l <= n){
        long long sum = 0;
        for(int i = l; i <= r; i++){
            sum += i;
        }

        if(sum > n){
            l++;
        }
        else{
            if(sum == n) result++;
            r++;
        }
    }

    cout << result;

    return 0;
}