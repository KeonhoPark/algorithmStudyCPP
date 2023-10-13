#include<bits/stdc++.h>
using namespace std;

int n, f;
vector<int> maks;

int getTotal(int amount){
    int total = 0;
    for(auto m : maks){
        total += (m / amount);
    }

    return total;
}

int getMax(int maxMak){
    int start = 1;
    int end = maxMak;
    int result = 0;

    while(start <= end){
        int mid = (start + end) / 2;

        int total = getTotal(mid);
        if(total < f) end = mid - 1;
        else if(total >= f){
            start = mid + 1;
            if(result < mid) result = mid;
        }
    }

    return result;
}

int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);

    cin >> n >> f;
    for(int i = 0; i < n; i++){
        int input;
        cin >> input;
        maks.push_back(input);
    }

    sort(maks.begin(), maks.end(), greater<int>());

    if(maks[0] == 0) cout << 0;
    else cout << getMax(maks[0]);

    return 0;
}