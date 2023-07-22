#include<bits/stdc++.h>
using namespace std;

bool cmp(pair<long long, int> &a, pair<long long, int> &b){
    if(a.second == b.second) return a.first < b.first;
    return a.second > b.second;
}

int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);

    int n;
    cin >> n;

    map<long long, int> cardCnt;
    for(int i = 0; i < n; i++){
        long long card;
        cin >> card;
        cardCnt[card]++;
    }

    vector<pair<long long, int>> v(cardCnt.begin(), cardCnt.end());
    sort(v.begin(), v.end(), cmp);

    cout << v.begin()->first;

    return 0;
}