#include<bits/stdc++.h>
using namespace std;

long long n, w;

int getWinRate(long long winTotal, long long gameTotal){
    return (winTotal * 100) / gameTotal;
}

long long binSearch(int curWinRate){
    long long start = 1;
    long long end = 1000000000;
    long long result = 1000000000;

    while(start <= end){
        long long mid = (start + end) / 2;

        int winRate = getWinRate(mid + w, mid + n);

        if(curWinRate < winRate){
            end = mid - 1;
        }
        else if(curWinRate >= winRate){
            start = mid + 1;
        }
    }

    return start;
}

int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);

    cin >> n >> w;
    int curWinRate = getWinRate(w, n);
    
    if(curWinRate >= 99){
        cout << -1;
        return 0;
    }

    int result = binSearch(curWinRate);
    
    cout << result;

    return 0;
}