#include<bits/stdc++.h>
using namespace std;

int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);

    int n;
    int numbers[1000001];
    int result[1000001];
    memset(result, -1, sizeof(int) * 1000001);
    stack<pair<int, int>> s;
    
    cin >> n;

    for(int i = 1; i <= n; i++){
        int input;
        cin >> input;

        while(!s.empty() && input > s.top().first){
            result[s.top().second] = input;
            s.pop();
        }
        s.push(make_pair(input, i));
    }

    for(int i = 1; i <= n; i++) cout << result[i] << " ";

    return 0;
}