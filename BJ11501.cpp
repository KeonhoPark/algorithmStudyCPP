#include<bits/stdc++.h>
using namespace std;

int t;

int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);

    cin >> t;
    for(int i = 0; i < t; i++){
        int n = 0;
        long long result = 0;
        vector<int> stocks;
        cin >> n;
        for(int j = 0; j < n; j++){
            int input;
            cin >> input;
            stocks.push_back(input);
        }

        int mx = stocks[n-1];
        for(int j = n-1; j >= 0; j--){
            if(stocks[j] > mx) mx = stocks[j];
            else if(stocks[j] < mx) result += (mx - stocks[j]);
        }

        cout << result << "\n";
    }

    return 0;
}
