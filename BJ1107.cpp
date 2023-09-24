#include<bits/stdc++.h>
using namespace std;

int goal, n;
int keys[11];
int cur = 100;
int goal_len = 0;

int get_len(int goal){
    int len = 0;
    if(goal == 0) return 1;

    while(goal > 0){
        goal /= 10;
        len++;
    }

    return len;
}

bool is_possible(int goal){
    if(goal == 0){
        if(keys[0] == 1) return false;
        else return true;
    }
    else{
        while(goal > 0){
            int tmp = goal % 10;
            if(keys[tmp] == 1) return false;
            goal /= 10;
        }

        return true;
    }
}

int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);

    cin >> goal;
    cin >> n;

    int mn = abs(goal - 100);

    for(int i = 0; i < n; i++){
        int input;
        cin >> input;
        keys[input] = 1;
    }

    for(int i = 0; i <= 1000000; i++){
        if(is_possible(i)){
            mn = min(mn, get_len(i) + abs(goal - i));
        }
    }

    cout << mn;
    return 0;
}