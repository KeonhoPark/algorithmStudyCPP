#include<bits/stdc++.h>
using namespace std;

int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);

    int n;
    cin >> n;
    set<string> words;
    int result = 0;

    for(int i = 0; i < n; i++){
        string input;
        cin >> input;
        words.insert(input);
    }

    for(auto it1 = words.begin(); it1 != words.end(); it1++){
        bool isHead = false;
        for(auto it2 = words.begin(); it2 != words.end(); it2++){
            string word1 = *it1;
            string word2 = *it2;
            if(word1.size() > word2.size()) continue;
            if(word1 == word2) continue;

            int flag = 0;
            for(int i = 0; i < word1.size(); i++){
                if(word1[i] != word2[i]){
                    flag = 1;
                    break;
                }
            }
            if(flag == 0) {
                isHead = true;
                break;
            }
        }
        if(!isHead) result++;
    }
    
    cout << result;

    return 0;
}