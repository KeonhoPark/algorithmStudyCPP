#include<bits/stdc++.h>
using namespace std;

int n, k;
int result = 0;

int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);

    cin >> n >> k;
    int rooms[2][7];
    memset(rooms, 0, sizeof(int) * 7 * 2);

    for(int i = 0; i < n; i++){
        int s, g = 0;
        cin >> s >> g;
        rooms[s][g]++;
    }

    for(int i = 0; i < 2; i++){
        for(int j = 1; j <= 6; j++){
            if(rooms[i][j] == 0) continue;
            if(rooms[i][j] > k) result += ((rooms[i][j] / k) + 1);
            else result++;
        }
    }

    cout << result;
}