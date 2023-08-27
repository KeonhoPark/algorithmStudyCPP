#include<bits/stdc++.h>
using namespace std;

int n;
int coins[] = {500, 100, 50, 10, 5, 1};
int result = 0;

int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);

    cin >> n;

    int remain = 1000 - n;
    int index = 0;
    while(remain > 0){
        if(remain < coins[index]){
            index++;
            continue;
        }
        int temp = remain / coins[index]; 
        result += temp;
        remain -= (temp * coins[index]);
        index++;
    }

    cout << result;
    return 0;
}
