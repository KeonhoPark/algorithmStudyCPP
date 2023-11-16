#include<bits/stdc++.h>
using namespace std;

int weights[6];
int result;

int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);

    for(int i = 1; i <= 5; i++){
        cin >> weights[i];
    }

    result += weights[5];
    weights[5] = 0;

    for(int i = 4; i >= 1; i--){
        int mn = min(weights[5 - i], weights[i]);
        result += mn;
        weights[i] -= mn;
        weights[5 - i] -= mn;
    }
    
    for(int i = 4; i >= 1; i--){
        if(i == 4 && weights[i] != 0){
            result += weights[4];
            weights[4] = 0;
        }
        else if(i == 3 && weights[i] != 0){
            while(weights[3] > 0){
                if(weights[1] >= 2){
                    weights[3]--;
                    weights[1] -= 2;
                    result++;
                }
                else if(weights[1] == 1){
                    weights[3]--;
                    weights[1]--;
                    result++;
                }
                else{
                    weights[3]--;
                    result++;
                }
            }
        }
        else if(i == 2 && weights[i] != 0){
            while(weights[2] >= 2){
                if(weights[1] >= 1){
                    weights[2] -= 2;
                    weights[1]--;
                    result++;
                }
                else{
                    weights[2] -= 2;
                    result++;
                }
            }

            if(weights[2] == 1){
                result++;
                if(weights[1] > 3) weights[1] -= 3;
                else weights[1] = 0;
            }
        }
        else if(i == 1 && weights[i] != 0){
            if(weights[1] % 5 == 0)
                result += (weights[1] / 5);
            else
                result += (weights[1] / 5 + 1);
        }
    }

    cout << result;

    return 0;
}