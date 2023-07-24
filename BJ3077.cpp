#include<bits/stdc++.h>
using namespace std;

int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);

    int n;
    cin >> n;
    unordered_map<string, int> warIndex;
    vector<string> answers;
    int cnt = 0;

    for(int i = 0; i < n; i++){
        string answerIn;
        cin >> answerIn;
        warIndex[answerIn] = i;
    }

    for(int i = 0; i < n; i++){
        string answerIn;
        cin >> answerIn;
        answers.push_back(answerIn);
    }

    for(int i = 0; i < n-1; i++){
        for(int j = i+1; j < n; j++){
            if(warIndex[answers[i]] < warIndex[answers[j]]) cnt++;
        }
    }

    cout << cnt << "/" << (n*(n-1))/2;
    
    return 0;
}