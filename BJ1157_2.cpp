#include<iostream>
#include<cstring>
#include<string>

using namespace std;

const int DIF = 'a' - 'A';

char toUpper(char input){
    if(96 < input && input < 123){
        cout << (int)input;
        return input - DIF;
    }
    else{
        return input;
    }
}

int main(){
    string input = "";
    int max = -1;
    int count = 0;
    char alp;
    cin >> input;
    const int len = input.length();
    char* chArr = new char[len];
    int cntArr[26] = {0};
    strcpy(chArr, input.c_str());
    
    for(int i = 0; i < len; i++){
        char tmp = toUpper(chArr[i]);
        cntArr[tmp - 65] += 1;
    }
    cout << endl;

    for(int i = 0; i < 26; i++){
        if(cntArr[i] > max){
            max = cntArr[i];
            alp = (char)(i + 65);
        }
    }

    for(int i = 0; i < 26; i++){
        if(cntArr[i] == max){
            count += 1;
        }
    }

    if(count == 1){
        cout << alp << endl;
    }else{
        cout << "?" << endl;
    }
}