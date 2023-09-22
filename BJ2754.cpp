#include<bits/stdc++.h>
using namespace std;

string score;
float result;

int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);

    cin >> score;

    if(score == "F"){
        cout << "0.0";
        return 0;
    }

    if(score[1] == '+'){
        result += 0.3;
    }
    else if(score[1] == '-'){
        result -= 0.3;
    }

    if(score[0] == 'A') result += 4;
    else if(score[0] == 'B') result += 3;
    else if(score[0] == 'C') result += 2;
    else if(score[0] == 'D') result += 1;
    
    cout << fixed;
    cout.precision(1);
    cout << result;

    return 0;
}