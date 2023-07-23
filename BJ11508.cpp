#include<bits/stdc++.h>
using namespace std;

int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);

    vector<int> prices;
    int result = 0;
    int n;
    cin >> n;

    for(int i = 0; i < n; i++){
        int price;
        cin >> price;
        prices.push_back(price);
    }

    sort(prices.begin(), prices.end(), greater<int>());

    for(int i = 0; i < n; i++){
        if((i + 1) % 3 != 0) result += prices[i];
    }

    cout << result;

    return 0;
}