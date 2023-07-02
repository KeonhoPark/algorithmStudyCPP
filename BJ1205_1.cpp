#include<iostream>
#include<vector>
using namespace std;

int main(){
    int n, new_score, p;
    cin >> n >> new_score >> p;
    if(n == 0){
        cout << 1 << endl;
    }

    else{
        vector<int> scores;

        for(int i = 0; i < n; i++){
            int score = 0;
            cin >> score;
            scores.push_back(score);
        }

        auto last = --scores.end();
        if(n == p && *last >= new_score){
            cout << -1 << endl;
        }
        else{
            int rank = 1;
            int flag = 0;
            for(auto it = scores.begin(); it != scores.end(); it++){
                if(new_score >= *it){
                    cout << rank << endl;
                    flag = 1;
                    break;
                }
                rank++;
            }
            if(flag == 0) cout << rank << endl;
        }
    }

    return 0;
}