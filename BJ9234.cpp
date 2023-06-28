#include<iostream>
#include<map>
#include<string>
#include<cstring>
using namespace std;

int main(){
    int n = 0;
    cin >> n;

    for(int i = 0; i < n; i++){
        map<char, int> alpCnt;
        for(char alp = 'A'; alp <= 'Z'; alp++){
            alpCnt[alp] = 0;
        }

        string input;
        cin >> input;
        int index = 0;
        int flag = 0;
        while (index <= input.length()){
            alpCnt[input[index]]++;
            if(alpCnt[input[index]] == 3){
                if(input[index] == input[index+1]){
                    alpCnt[input[index]] = 0;
                    index++;
                }
                else{
                    cout << "FAKE" << endl;
                    flag = 1;
                    break;
                }
            }
        
            index++;
        }
        if(flag == 0) cout << "OK" << endl;
    }
    return 0;
}