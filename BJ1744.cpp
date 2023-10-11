#include<bits/stdc++.h>
using namespace std;

int n;
vector<pair<int, int>> p;
vector<pair<int, int>> m;
int zero_count;
int result;

bool cmp(pair<int, int> &a, pair<int, int> &b){
    return a.first > b.first;
}

int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);

    cin >> n;

    for(int i = 0; i < n; i++){
        int input;
        cin >> input;
        if(input > 0) p.push_back(make_pair(input, 0));
        else if(input < 0) m.push_back(make_pair(input, 0));
        else zero_count++;
    }

    sort(p.begin(), p.end(), cmp);
    sort(m.begin(), m.end());

    if(m.size() >= 2){
        for(int i = 0; i + 1 < m.size(); i += 2){
            result += (m[i].first * m[i+1].first);
            m[i].second = 1;
            m[i+1].second = 1;
        }
    }

    for(int i = m.size()-1; i >= 0; i--){
        if(zero_count == 0) break;
        
        if(m[i].second == 0){
            m[i].second = 1;
            zero_count--;
        }
    }

    for(auto t : m){
        if(t.second == 0) result += t.first;
    }

    if(p.size() >= 2){
        for(int i = 0; i + 1 < p.size(); i += 2){
            if(p[i].first == 1 || p[i+1].first == 1) result += (p[i].first + p[i+1].first);
            else result += (p[i].first * p[i+1].first);
            p[i].second = 1;
            p[i+1].second = 1;
        }
    }

    for(auto t : p){
        if(t.second == 0) result += t.first;
    }

    cout << result;

    return 0;
}