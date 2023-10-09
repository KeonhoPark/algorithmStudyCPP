#include<bits/stdc++.h>
using namespace std;

int n, k;
int numbers[1001];
int idx = 1;

bool isPrime(int n){
    for(int i = 2; i < n; i++){
        if(n % i == 0) return false;
    }
    return true;
}

int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);

    cin >> n >> k;

    for(int i = 2; i <= n; i++){
        if(isPrime(i)){
            for(int j = 1; j * i <= n; j++){
                if(numbers[i * j] == 0){
                    numbers[i * j] = idx;
                    if(idx == k){
                        cout << i * j << "\n";
                        return 0;
                    }
                    idx++;
                }
            }
        }
    }

    return 0;
}