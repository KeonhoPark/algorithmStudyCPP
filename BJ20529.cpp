#include<bits/stdc++.h>
using namespace std;

int t;

int get_distance(string a, string b){
    int result = 0;
    for(int i = 0; i < a.size(); i++){
        if(a[i] != b[i]) result++;
    }

    return result;
}

int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);

    cin >> t;
    for(int k = 0; k < t; k++){
        vector<string> mbtis;
        int n;
        int mn = 100;
        cin >> n;

        for(int i = 0; i < n; i++){
            string input;
            cin >> input;
            mbtis.push_back(input);
        }

        if(n > 32){
            cout << 0 << "\n";
            continue;
        }

        for(int a = 0; a < n - 2; a++){
            for(int b = a + 1; b < n - 1; b++){
                for(int c = b + 1; c < n; c++){
                    int dist = 0;
                    dist += get_distance(mbtis[a], mbtis[b]);
                    dist += get_distance(mbtis[a], mbtis[c]);
                    dist += get_distance(mbtis[b], mbtis[c]);

                    if(mn > dist) mn = dist;
                }
            }
        }

        cout << mn << "\n";
    }

    return 0;
}