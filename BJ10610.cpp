#include<bits/stdc++.h>
using namespace std;

int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);

    string input;
    vector<int> num_list;
    cin >> input;

    int flag = 0;
    for(auto c : input){
        if(c == '0'){
            flag = 1;
        }
        num_list.push_back(c - '0');
    }

    if(flag == 0) cout << -1;
    else{
        long long total = 0;
        sort(num_list.begin(), num_list.end(), greater<int>());
        for(auto n : num_list){
            total += n;
        }
        if(total % 3 == 0){
            for(auto n : num_list) cout << n;
        }
        else cout << -1;
    }

    return 0;
}