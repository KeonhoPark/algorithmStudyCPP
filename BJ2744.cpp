#include<bits/stdc++.h>
using namespace std;

int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);

    string input;
    cin >> input;

    for(auto c : input){
       if(islower(c)) cout << (char)(toupper(c));
       else cout << (char)(tolower(c));
    }

    return 0;
}