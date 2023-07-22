#include<bits/stdc++.h>
using namespace std;

int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);

    int n = -1;
    int m = -1;
    while(true){
        cin >> n >> m;
        if(n == 0 && m == 0) break;
        unordered_map<int, int> cdList;
        int result = 0;

        for(int i = 0; i < n; i++){
            int input;
            cin >> input;
            cdList.insert(make_pair(input, 1));
        }

        for(int i = 0; i < m; i++){
            int input;
            cin >> input;
            if(cdList.find(input) != cdList.end()) result++;
        }

        cout << result << "\n";
    }

    return 0;
}