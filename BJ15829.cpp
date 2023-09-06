#include<bits/stdc++.h>
using namespace std;

int n;
long long result;
unordered_map<char, int> alp_num;

int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);

    for(int i = 1; i <= 26; i++){
        alp_num.insert(make_pair((char)(i + 96), i));
    }

    string input;
    cin >> n;
    cin >> input;

    for(int i = 0; i < n; i++){
        result += ((alp_num[input[i]]) * pow(31, i));
    }

    cout << result;

    return 0;
}