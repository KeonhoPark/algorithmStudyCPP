#include<bits/stdc++.h>
using namespace std;

vector<int> scores;
vector<int> tmp;
vector<int> ranks;
int total;

int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);

    for(int i = 1; i <= 8; i++){
        int score;
        cin >> score;
        scores.push_back(score);
        tmp.push_back(score);
    }

    sort(scores.begin(), scores.end(), greater<int>());

    for(int i = 0; i < 5; i++){
        total += scores[i];
        int index = 0;
        for(int j = 0; j < tmp.size(); j++){
            if(tmp[j] == scores[i]){
                index = j;
                break;
            } 
        }
        ranks.push_back(index + 1);
    }

    sort(ranks.begin(), ranks.end());

    cout << total << "\n";
    for(auto r : ranks) cout << r << " ";

    return 0;
}