#include<bits/stdc++.h>
using namespace std;

double totalHak;
double totalScore;

void calcTotalScore(string grade, double hak){
    if(grade == "A+") totalScore += (4.5 * hak);
    else if(grade == "A0") totalScore += (4.0 * hak);
    else if(grade == "B+") totalScore += (3.5 * hak);
    else if(grade == "B0") totalScore += (3.0 * hak);
    else if(grade == "C+") totalScore += (2.5 * hak);
    else if(grade == "C0") totalScore += (2.0 * hak);
    else if(grade == "D+") totalScore += (1.5 * hak);
    else if(grade == "D0") totalScore += (1.0 * hak);
    else return;
}

int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);

    for(int i = 0; i < 20; i++){
        string name, grade;
        double hak;

        cin >> name >> hak >> grade;

        if(grade != "P") totalHak += hak;
        calcTotalScore(grade, hak);
    }

    cout << fixed;
    cout.precision(6);
    cout << totalScore / (double)(totalHak);

    return 0;
}