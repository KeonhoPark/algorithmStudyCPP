#include<bits/stdc++.h>
using namespace std;

int n, l;
vector<string> dnas;
string result = "";
int total = 0;

bool cmp(pair<char, int> &a, pair<char, int> &b){
    if(a.second == b.second) return a.first < b.first;
    else return a.second > b.second;
}

int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);

    cin >> n >> l;

    for(int i = 0; i < n; i++){
        string input;
        cin >> input;
        dnas.push_back(input);
    }

    for(int i = 0; i < l; i++){
        unordered_map<char, int> counts;
        for(int j = 0; j < n; j++){
            if(counts.find(dnas[j][i]) == counts.end()) counts[dnas[j][i]] = 1;
            else counts[dnas[j][i]]++;
        }
        vector<pair<char, int>> v_counts(counts.begin(), counts.end());
        sort(v_counts.begin(), v_counts.end(), cmp);

        result += v_counts[0].first;
        total += n - v_counts[0].second;
    }

    cout << result << "\n";
    cout << total;

    return 0;
}