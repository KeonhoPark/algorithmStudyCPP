#include<bits/stdc++.h>
using namespace std;

int n, s, r;
map<int, int> broken;
map<int, int> reserve;
int result;

int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);

    cin >> n >> s >> r;

    if(r == 0){
        cout << s;
        return 0;
    }

    for(int i = 0; i < s; i++){
        int input;
        cin >> input;
        broken[input-1] = 0;
    }

    for(int i = 0; i < r; i++){
        int input;
        cin >> input;
        reserve[input-1] = 0;
    }

    for(int i = 0; i < n; i++){
        if((broken.find(i) != broken.end()) && (reserve.find(i) != reserve.end())){
            reserve.erase(i);
            broken.erase(i);
        }
    }

    for(int i = 0; i < n; i++){
        if((broken.find(i) != broken.end()) && (reserve.find(i) == reserve.end())){
            if((reserve.find(i - 1) != reserve.end())){
                reserve.erase(i - 1);
                broken.erase(i);
            }
            else if((reserve.find(i + 1) != reserve.end())){
                reserve.erase(i + 1);
                broken.erase(i);
            }
        }
    }

    for(auto it = broken.begin(); it != broken.end(); it++){
        result++;
    }

    cout << result;

    return 0;
}