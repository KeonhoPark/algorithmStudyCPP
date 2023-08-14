#include<bits/stdc++.h>
using namespace std;

int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);

    int n = 0;
    cin >> n;

    for(int i = 0; i < n; i++){
        list<char> lst;
        string input;
        cin >> input;

        auto cursor = lst.begin();
        for(int j = 0; j < input.size(); j++){
            if(input[j] == '<'){
                if(cursor != lst.begin()) cursor--; 
            }
            else if(input[j] == '>'){
                if(cursor != lst.end()) cursor++;
            }
            else if(input[j] == '-'){
                if(cursor != lst.begin()){
                    cursor--;
                    cursor = lst.erase(cursor);
                }
            }
            else{
                lst.insert(cursor, input[j]);
            }
        }

        for(auto it = lst.begin(); it != lst.end(); it++) cout << *it;
        cout << '\n';
    }

    return 0;
}