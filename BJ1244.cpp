#include<bits/stdc++.h>
using namespace std;

int switches[101];
int switch_number;
int student_number;

int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);

    cin >> switch_number;
    for(int i = 1; i <= switch_number; i++){
        cin >> switches[i];
    }
    cin >> student_number;

    for(int i = 0; i < student_number; i++){
        int sex, num;
        cin >> sex >> num;
        if(sex == 1){
            for(int i = 1; i * num <= switch_number; i++)
                switches[i * num] = (switches[i * num] == 1 ? 0 : 1);
        }
        else{
            switches[num] = (switches[num] == 1 ? 0 : 1);
            if(num - 1 >= switch_number - num){
                for(int j = 1; j <= switch_number - num; j++){
                    if(switches[num - j] != switches[num + j]) break;
                    switches[num - j] = (switches[num - j] == 1 ? 0 : 1);
                    switches[num + j] = (switches[num + j] == 1 ? 0 : 1);
                }
            }
            else{
                for(int j = 1; j <= num - 1; j++){
                    if(switches[num - j] != switches[num + j]) break;
                    switches[num - j] = (switches[num - j] == 1 ? 0 : 1);
                    switches[num + j] = (switches[num + j] == 1 ? 0 : 1);
                }
            }
        }
    }

    for(int i = 1; i <= switch_number; i++){
        cout << switches[i];
        if(i % 20 == 0) cout << "\n";
        else cout << " ";
    }

    return 0;
}