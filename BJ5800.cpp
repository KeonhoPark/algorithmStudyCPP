#include<bits/stdc++.h>
using namespace std;

int k;

int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);

    cin >> k;
    for(int i = 1; i <= k; i++){
        int n;
        vector<int> scores;

        cin >> n;
        for(int j = 0; j < n; j++){
            int score;
            cin >> score;
            scores.push_back(score);
        }
        sort(scores.begin(), scores.end(), greater<int>());

        int mx = -1;
        for(int j = 0; j < n-1; j++){
            int tmp = scores[j] - scores[j+1];
            if(tmp > mx) mx = tmp;
        }

        cout << "Class " << i << "\n";
        cout << "Max " << scores[0] << ", Min " << scores[n-1] << ", Largest gap " << mx << "\n";
    }

    return 0;
}