#include<bits/stdc++.h>
using namespace std;

int n;
deque<int> heights;
int result;

int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);

    cin >> n;
    for(int i = 0; i < n; i++){
        int input;
        cin >> input;
        heights.push_back(input);
    }

    int prev_height = heights.front(); heights.pop_front();
    result++;

    while(!heights.empty()){
        if(prev_height <= heights.front()) result++;
        prev_height = heights.front(); heights.pop_front();
    }

    cout << result;
    
    return 0;
}