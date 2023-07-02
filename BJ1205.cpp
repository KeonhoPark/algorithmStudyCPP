#include<iostream>
#include<map>
using namespace std;


//vector로 다시 풀기
//count 값을 사용해야함
int main(){
    int n, new_score, p = 0;
    cin >> n >> new_score >> p;
    if(n == 0){
        cout << 1 << endl;
    }
    else{
        map<int, int, greater<int>>scoreRank;
        int rank = 1;
        for(int i = 1; i < n + 1; i++){
            int score = 0;
            cin >> score;
            if(scoreRank.find(score) == scoreRank.end()){
                scoreRank[score] = i;
            }
            rank++;
        }

        auto first = scoreRank.begin();
        auto last = --scoreRank.end();
        if(last->first >= new_score && p == n){
            cout << -1 << endl;
        }
        else if(last->first > new_score && p > n){
            cout << rank << endl;
        }
        else{
            for(auto it = scoreRank.begin(); it != scoreRank.end(); it++){
                if(new_score >= it->first){
                    cout << it->second << endl;
                    break;
                }
            }
        }
    }

    return 0;
}
