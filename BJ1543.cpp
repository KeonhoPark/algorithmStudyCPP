#include<bits/stdc++.h>
using namespace std;

int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);

    int count = 0;
    string doc;
    string word;
    getline(cin, doc);
    getline(cin, word);

    int index = 0;
    while(index < doc.size()){
        int flag = 0;
        for(int i = 0; i < word.size(); i++){
            if(word[i] != doc[index+i]){
                index++;
                flag = 1;
                break;
            }
        }
        if(flag == 0){
            count++;
            index += word.size();
        }
        
    }
    
    cout << count;
}