#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
    int n, k = 0;
    vector<int> scores;
    cin >> n >> k;
    for(int i = 0; i < n; i++){
        int score = 0;
        cin >> score;
        scores.push_back(score);
    }

    sort(scores.begin(), scores.end(), [](int a, int b){return a > b;});
    cout << scores[k-1];

    return 0;
}