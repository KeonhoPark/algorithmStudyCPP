#include <iostream>
using namespace std;

int main(){
    int hour = 0;
    int minute = 0;
    cin >> hour;
    cin >> minute;

    if(hour == 0 && minute < 45){
        cout << 23 << " " << 60 + minute - 45;
    }
    else if(minute < 45){
        cout << hour - 1 << " " << 60 + minute - 45;
    }
    else{
        cout << hour << " " << minute - 45;
    }

    return 0;
}