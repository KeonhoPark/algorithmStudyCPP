#include<bits/stdc++.h>
using namespace std;

int n, k;


int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);
    int balls[1001];

    cin  >> n >> k;

    int s = ((k + 1) * k) / 2;
    if(n < s) cout << -1;
    else if(n == s) cout << k - 1;
    else{
        int remain = n - s;
        int index = k;
        for(int i = 1; i <= k; i++){
            balls[i] = i;
        }

        while(remain > 0){
            if(index == 0) index = k;
            balls[index]++;
            remain--;
            index--;
        }

        cout << balls[k] - balls[1];
    }

    return 0;
}