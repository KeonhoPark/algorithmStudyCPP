#include<bits/stdc++.h>
using namespace std;

int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);

    string input;
    cin >> input;
    string ans = input;

    for(int i = 0; i < input.size() - 2; i++){
        for(int j = i + 1; j < input.size() - 1; j++){
            string temp = input;
            reverse(temp.begin(), temp.begin() + i + 1);
            reverse(temp.begin() + i + 1, temp.begin() + j + 1);
            reverse(temp.begin() + j + 1, temp.end());

            ans = min(ans, temp);
        }
    }

    cout << ans;

    return 0;
}