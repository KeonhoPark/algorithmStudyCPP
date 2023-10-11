#include<bits/stdc++.h>
using namespace std;

int n;
vector<string> guitars;

bool cmp(string &a, string &b){
    if(a.size() == b.size()){
        int sum_a = 0;
        int sum_b = 0;
        for(int i = 0; i < a.size(); i++){
            if(a[i] < 'A') sum_a += a[i] - '0';
            if(b[i] < 'A') sum_b += b[i] - '0';
        }
        if(sum_a == sum_b) return a < b;
        return sum_a < sum_b;
    }
    return a.size() < b.size();
}

int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);

    cin >> n;
    for(int i = 0; i < n; i++){
        string input;
        cin >> input;
        guitars.push_back(input);
    }

    sort(guitars.begin(), guitars.end(), cmp);

    for(auto g : guitars) cout << g << "\n";

    return 0;
}