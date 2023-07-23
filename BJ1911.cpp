#include<bits/stdc++.h>
#define start first
#define finish second
using namespace std;

int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);

    map<int, int> startEnd;
    int result = 0;
    int n, l;
    cin >> n >> l;

    for(int i = 0; i < n; i++){
        int s, e;
        cin >> s >> e;
        startEnd[s] = e;
    }

    int index = -1;

    for(auto it = startEnd.begin(); it != startEnd.end(); it++){
        if(index < it->finish){
            if(index < it->start) index = it->start;
            int len = it->finish - index;
            int cnt = len / l;
            result += cnt;
            index += (cnt * l);
            //cout <<"1 " << index << endl;

            if((it->finish - index) % l != 0){
                result++;
                index += l;
                //cout <<"2 " << index << endl;
            }
        }
    }

    cout << result;

    return 0;
}