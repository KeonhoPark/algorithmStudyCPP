#include<bits/stdc++.h>
using namespace std;

int t;
vector<string> numbers;
vector<string> result;

void getNumbers(string &s){
    int flag = 0;
    int isStart = 1;
    string tmp = "";

    for(int i = 0; i < s.size(); i++){
        if('0' <= s[i] && s[i] <= '9'){
            tmp += s[i];
            flag = 0;
        }
        else{
            if(flag == 0 && !tmp.empty()) numbers.push_back(tmp);
            tmp = "";
            flag = 1;
        }
    }

    if(!tmp.empty()) numbers.push_back(tmp);
}

void eraseZero(){
    for(int i = 0; i < numbers.size(); i++){
        int flag = 0;
        string tmp = "";
        for(int j = 0; j < numbers[i].size(); j++){
            if(numbers[i][j] == '0' && flag == 0) continue;
            else{
                tmp += numbers[i][j];
                flag = 1;
            }
        }

        if(tmp.empty()) result.push_back("0");
        else result.push_back(tmp);
    }
}

bool cmp(string &a, string &b){
    if(a.size() == b.size()) return a < b;
    return a.size() < b.size();
}

int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);

    cin >> t;

    for(int i = 0; i < t; i++){
        string input;
        cin >> input;
        getNumbers(input);
    }

    eraseZero();
    sort(result.begin(), result.end(), cmp);

    for(auto s : result) cout << s << "\n";

    return 0;
}