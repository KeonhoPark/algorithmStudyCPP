#include<bits/stdc++.h>
using namespace std;

int n;
map<string, int> word_count;

bool cmp(pair<string, int> &a, pair<string, int> &b){
    if(a.second == b.second) return a.first < b.first;
    return a.second > b.second;
}

int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);

    cin >> n;
    for(int i = 0; i < n; i++){
        string input;
        cin >> input;
        if(word_count.find(input) == word_count.end()){
            word_count.insert(make_pair(input, 1));
        }
        else{
            word_count[input]++;
        }
    }

    vector<pair<string, int>> v(word_count.begin(), word_count.end());
    sort(v.begin(), v.end(), cmp);

    cout << v[0].first;

    return 0;
}