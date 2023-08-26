#include<bits/stdc++.h>
using namespace std;

int n;
vector<int> tips;
long long result;

int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);

    cin >> n;
    for(int i = 0; i < n; i++){
        int input;
        cin >> input;
        tips.push_back(input);
    }

    sort(tips.begin(), tips.end(), greater<int>());

    for(int i = 1; i <= tips.size(); i++){
        int temp = tips[i-1] - (i - 1);
        if(temp > 0) result += temp;
    }

    cout << result;

    return 0;
}