#include<bits/stdc++.h>
using namespace std;

int dist;

int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);

    cin >> dist;

    int tmp = dist % 100;

    if(tmp == 10 || tmp == 30 || tmp == 60 || tmp == 0){
        cout << 0;
        return 0;
    }

    int index = 1;
    while(true){
        for(int i = 1; i <= index; i++){
            dist -= 5;
            if(dist <= 0){
                cout << i;
                return 0;
            }
        }

        for(int i = index; i >= 1; i--){
            dist -= 5;
            if(dist < 0){
                cout << i;
                return 0;
            }
        }

        index++;
        if(index == 5) index = 1;
    }

    return 0;
}