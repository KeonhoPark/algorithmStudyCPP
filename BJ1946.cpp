#include<bits/stdc++.h>
using namespace std;

int t;

int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);

    cin >> t;
    for(int i = 0; i < t; i++){
        map<int, int> scores;
        int result = 0;
        int n;
        cin >> n;
        for(int j = 0; j < n; j++){
            int a, b;
            cin  >> a >> b;
            scores.insert(make_pair(a, b));
        }

        int mn = n+1;
        for(auto s : scores){
            if(s.second < mn){
                mn = s.second;
                result++;
            }
        }

        cout << result << "\n";
    }

    return 0;
}
