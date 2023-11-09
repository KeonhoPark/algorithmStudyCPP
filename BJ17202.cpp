#include<bits/stdc++.h>
using namespace std;

string a;
string b;
string prev_a_b;

int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);

    cin >> a >> b;

    for(int i = 0; i < 8; i++){
        prev_a_b += a[i];
        prev_a_b += b[i];
    }

    while(prev_a_b.size() > 2){
        string cur_a_b = "";
        for(int i = 1; i < prev_a_b.size(); i++){
            char tmp = (((prev_a_b[i] - '0') + (prev_a_b[i - 1] - '0')) % 10) + '0';
            cur_a_b += tmp;
        }

        prev_a_b = cur_a_b;
    }
    
    for(auto c : prev_a_b) cout << c;
    
    return 0;
}