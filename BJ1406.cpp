#include<bits/stdc++.h>
using namespace std;

int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);
    list<char> alphabets;
    string input;
    cin >> input;
    for(int i = 0; i < input.size(); i++){
       alphabets.push_back(input[i]);
    }

    int m = 0;
    cin >> m;
    auto cursor = alphabets.end();
    for(int i = 0; i < m; i++){
        string control;
        cin >> control;
        if(control == "L"){
            if(cursor != alphabets.begin()){
                cursor--;
            }
        }
        else if(control == "D"){
            if(cursor != alphabets.end()){
                cursor++;
            }
        }
        else if(control == "B"){
            if(cursor != alphabets.begin()){
                cursor--;
                cursor = alphabets.erase(cursor);
            }
        }
        else if(control == "P"){
            char in;
            cin >> in;
            alphabets.insert(cursor, in);
        }
    }

    for(auto it = alphabets.begin(); it != alphabets.end(); it++){
        cout << *it;
    }
}