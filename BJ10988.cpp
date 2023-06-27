#include<iostream>
#include<string>
#include<cstring>
using namespace std;

int main(){
    string input = "";
    cin >> input;
    char chrArr[100] = {0,};
    strcpy(chrArr, input.c_str());

    int start = 0;
    int end = input.length() - 1;
    int flag = 0;

    while(start < end){
        if(chrArr[start] != chrArr[end]){
            cout << 0;
            flag = 1;
            break;
        }
        start++;
        end--;
    }

    if(flag == 0){
        cout << 1;
    }

    return 0;
}