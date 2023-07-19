#include<bits/stdc++.h>
using namespace std;

int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);

    int n = 1;
    while(true){
        cin >> n;
        if(n == 0){
            break;
        }
        map<string, string> convertOrigin;
        for(int i = 0; i < n; i++){
            string origin;
            cin >> origin;
            string convert;
            convert = origin;
            for(int j = 0; j < origin.size(); j++){
                if('A' <= origin[j] && origin[j] <= 'Z'){
                    convert[j] = origin[j] + ('a' - 'A');
                }
            }
            convertOrigin.insert(make_pair(convert, origin));
        }

        auto start = convertOrigin.begin();
        cout << start->second << "\n";
    }
    return 0;
}