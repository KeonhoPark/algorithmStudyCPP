#include<bits/stdc++.h>
using namespace std;

int r, c, n;
int table[1001];
vector<int> heights;
int result;

int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);

    cin >> r >> c >> n;

    for(int i = 0; i < n; i++){
        int input;
        cin >> input;
        heights.push_back(input);
    }

    sort(heights.begin(), heights.end());

    for(int i = 0; i < n; i++){
        int idx = i;
        if(idx >= c) idx = idx % c;

        if(table[idx] < heights[i]){
            table[idx] = heights[i];
            result++;
        }
    }

    if(result > r * c) cout << r * c;
    else cout << result;

    return 0;
}