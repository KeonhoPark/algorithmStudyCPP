#include<iostream>
#include<set>
using namespace std;

int main(){

    multiset<double, greater<double>> scores;

    int n = 0;
    double sum = 0;
    cin >> n;
    for(int i = 0; i < n; i++){
        int score = 0;
        cin >> score;
        scores.insert(score);
    }

    for(auto it=scores.begin(); it != scores.end(); it++){
        sum += *it / *scores.begin() * 100;
    }

    cout.precision(10);
    cout << sum / (double)n;

    return 0;
}