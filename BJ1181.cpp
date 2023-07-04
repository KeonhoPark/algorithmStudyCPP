#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

bool cmp(string s1, string s2){
    if(s1.length() == s2.length()) return s1 < s2;
    else return s1.length() < s2.length();
}

int main(){
    int n = 0;
    cin >> n;
    vector<string> words;

    for(int i = 0; i < n; i++){
        string word;
        cin >> word;
        words.push_back(word);
    }

    sort(words.begin(), words.end(), cmp);
    words.erase(unique(words.begin(), words.end()), words.end());

    for(int i = 0; i < words.size(); i++){
        cout << words[i] << "\n";
    }

    return 0;
}