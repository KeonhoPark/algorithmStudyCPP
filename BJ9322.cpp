#include<bits/stdc++.h>
using namespace std;

int t;

void input(vector<string> &v){
    string input;
    cin >> input;
    v.push_back(input);
}

int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);

    cin >> t;
    for(int a = 0; a < t; a++){
        int n;
        vector<string> first;
        vector<string> second;
        vector<string> password;
        map<int, int> f_s;

        cin >> n;

        for(int i = 0; i < n; i++){
            input(first);
        }

        for(int i = 0; i < n; i++){
            input(second);
        }

        for(int i = 0; i < n; i++){
            input(password);
        }

        for(int i = 0; i < n; i++){
            for(int j = 0; j < n; j++){
                if(first[i] == second[j]) f_s.insert(make_pair(i, j));
            }
        }

        for(auto it = f_s.begin(); it != f_s.end(); it++){
            cout << password[it->second] << " ";
        }
        cout << "\n";
    }

    return 0;
}