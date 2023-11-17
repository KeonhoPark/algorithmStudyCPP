#include<bits/stdc++.h>
using namespace std;

int n;
long long k;
vector<long long> heights;
bool tired[1000001];

int get_num_tired(long long h){
    int cnt = 0;
    memset(tired, 0, sizeof(bool) * n);

    for(int i = 0; i < n - 1; i++){
        if(abs(heights[i] - heights[i + 1]) > h){
            if(!tired[i]) tired[i] = true;
            if(!tired[i + 1]) tired[i + 1] = true;
        }
    }

    for(int i = 0; i < n; i++){
        if(tired[i]) cnt++;
    }

    return cnt;
}

long long bin_search(long long mx, long long mn){
    long long s = mn;
    long long e = mx;

    while(s <= e){
        long long mid = (s + e) / 2;
        int cnt = get_num_tired(mid);

        if(cnt > k) s = mid + 1;
        else if(cnt <= k) e = mid - 1;
    }

    return s;
}

int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);

    cin >> n >> k;

    long long mn = 1000000001;
    long long mx = -1;
    for(int i = 0; i < n; i++){
        long long input;
        cin >> input;
        if(input > mx) mx = input;
        if(input < mn) mn = input;
        heights.push_back(input);
    }

    cout << bin_search(mx - mn, 0);

    return 0;
}