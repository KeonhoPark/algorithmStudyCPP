#include<bits/stdc++.h>
using namespace std;

int t;

int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);

    cin >> t;

    for(int i = 0; i < t; i++){
        int arr[1001] = {0,};
        int count[201] = {0,};
        int ranks[201][1001];
        memset(ranks, 0, sizeof(ranks));
        int n = 0;
        cin >> n;

        for(int j = 1; j <= n; j++){
            int input;
            cin >> input;
            arr[j] = input;
            count[input]++;
        }

        int time = 1;
        int rank = 1;

        int index[201] = {0,};
        int total[201] = {0,};
        while(time <= n){
            if(count[arr[time]] == 6){
                ranks[arr[time]][index[arr[time]]] = rank;
                rank++;
                index[arr[time]]++;
            }
            time++;
        }

        int mn = 10000000;
        int winning = 0;
        for(int j = 1; j <= 200; j++){
            if(ranks[j][0] == 0) continue;
            for(int k = 0; k < 4; k++){
                total[j] += ranks[j][k];
            }
            if(total[j] < mn){
                mn = total[j];
                winning = j;
            }
            else if(total[j] == mn){
                if(ranks[j][4] < ranks[winning][4]){
                    winning = j;
                }
            }
        }

        cout << winning << "\n";
    }
    
    return 0;
}