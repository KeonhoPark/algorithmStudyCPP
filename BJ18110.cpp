#include<bits/stdc++.h>
using namespace std;

int n;
vector<int> scores;
double result;
int rate;

int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);

    cin >> n;
    rate = (int)floor((n * 0.15) + 0.5);
    
    for(int i = 0; i < n; i++){
        int input;
        cin >> input;
        scores.push_back(input);
    }

    sort(scores.begin(), scores.end(), greater<int>());

    for(int i = rate; i < n - rate; i++){
        result += scores[i];
    }

    if(n == 0) cout << 0;
    else{
        cout << floor((result / (n - (2 * rate))) + 0.5);
    }
    return 0;
}