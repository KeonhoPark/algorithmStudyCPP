#include<bits/stdc++.h>
using namespace std;
int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);

    vector<string> inputs;
    int maxLen = -1;
    for(int i = 0; i < 5; i++){
        string input;
        cin >> input;
        maxLen = max(maxLen, (int)(input.size()));
        inputs.push_back(input);
    }

    for(int i = 0; i < maxLen; i++){
        for(int j = 0; j < inputs.size(); j++){
            if(inputs[j].size() <= i) continue;
            cout << inputs[j][i];
        }
    }

    return 0;
}
