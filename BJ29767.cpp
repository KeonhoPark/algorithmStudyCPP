#include<bits/stdc++.h>
using namespace std;

int n, k;
vector<int> scores;
vector<long long> sum_scores;
long long result;

int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);

    cin >> n >> k;

    for(int i = 0; i < n; i++){
        int score;
        cin >> score;
        scores.push_back(score);
    }

    long long total = 0;
    for(int i = 0; i < n; i++){
        total += scores[i];
        sum_scores.push_back(total);
    }

    sort(sum_scores.begin(), sum_scores.end(), greater<long long>());

    for(int i = 0; i < k; i++){
        result += sum_scores[i];
    }

    cout << result;

    return 0;
}