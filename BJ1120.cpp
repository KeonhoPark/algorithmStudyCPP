#include<bits/stdc++.h>
using namespace std;

string a;
string b;

int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);

    cin >> a >> b;
    if(a.size() == b.size()){
        int total = 0;
        for(int i = 0; i < a.size(); i++){
            if(a[i] != b[i]) total++;
        }
        cout << total;
    }
    else{
        int mn = 100;
        for(int i = 0; i <= b.size() - a.size(); i++){
            int total = 0;
            for(int j = 0; j < a.size(); j++){
                if(a[j] != b[i+j]) total++;
            }
            if(mn > total) mn = total;
        }
        cout << mn;
    }

    return 0;
}