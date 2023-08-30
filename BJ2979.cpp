#include<bits/stdc++.h>
using namespace std;

int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);

    int result = 0;
    int cnt = 0;
    int prev_time = 0;
    multimap<int, char> start_end;
    int costs[4] = {0,};
    for(int i = 1; i <= 3; i++){
        cin >> costs[i];
    }

    for(int i = 1; i <= 6; i++){
        int input;
        cin >> input;
        if(i % 2 == 1) start_end.insert(make_pair(input, 's'));
        else start_end.insert(make_pair(input, 'e'));
    }

    for(auto it = start_end.begin(); it != start_end.end(); it++){
        result += (((it->first - prev_time) * cnt) * costs[cnt]);
        prev_time = it->first;
        if(it->second == 's'){
            cnt++;
        }
        else if(it->second == 'e'){
            cnt--;
        }
    }

    cout << result;

    return 0;
}