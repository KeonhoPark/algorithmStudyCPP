#include<bits/stdc++.h>
using namespace std;

int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);

    int card[21];
    for(int i = 1; i < 21; i++){
        card[i] = i;
    }

    for(int i = 0; i < 10; i++){
        int start, end;
        cin >> start >> end;

        reverse(&card[start], &card[end+1]);
    }

    for(int i = 1; i < 21; i++){
        cout << card[i] << " ";
    }
}