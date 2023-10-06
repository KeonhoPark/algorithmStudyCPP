#include<bits/stdc++.h>
using namespace std;

string graph;
vector<int> counts;

void get_count(){
    int cnt = 0;
    for(int i = 0; i <= graph.size(); i++){
        if(i == graph.size()){
            if(cnt != 0) counts.push_back(cnt);
        }

        if(graph[i] == '.'){
            if(cnt == 0) counts.push_back(cnt);
            else{
                counts.push_back(cnt);
                counts.push_back(0);
            }
            cnt = 0;
        }
        else cnt++;
    }
}

bool has_odd(){
    for(auto c : counts){
        if(c % 2 == 1) return true;
    }

    return false;
}

int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);

    cin >> graph;
    get_count();

    if(has_odd()){
        cout << -1;
        return 0;
    }

    for(int i = 0; i < counts.size(); i++){
        if(counts[i] == 0){
            cout << '.';
            continue;
        }
        if(counts[i] == 2) cout << "BB";
        else if(counts[i] % 4 == 0){
            for(int j = 0; j < counts[i] / 4; j++) cout << "AAAA";
        }
        else{
            for(int j = 0; j < counts[i] / 4; j++) cout << "AAAA";
            cout << "BB";
        }
    }

    return 0;
}