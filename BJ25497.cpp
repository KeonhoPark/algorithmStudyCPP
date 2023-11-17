#include<bits/stdc++.h>
using namespace std;

int n;
string skills;
int result;

int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);

    cin >> n;
    cin >> skills;

    int flag_L = 0;
    int flag_S = 0;
    for(int i = 0; i < n; i++){
        if('1' <= skills[i] && skills[i] <= '9') result++;
        else if(skills[i] == 'L'){
            flag_L++;
        }
        else if(skills[i] == 'R'){
            if(flag_L >= 1) {
                result++;
                flag_L--;
            }
            else break;
        }
        else if(skills[i] == 'S'){
            flag_S++;
        }
        else if(skills[i] == 'K'){
            if(flag_S >= 1){
                result++;
                flag_S--;
            }
            else break;
        }
    }

    cout << result;

    return 0;
}