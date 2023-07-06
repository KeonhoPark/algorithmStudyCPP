#include<iostream>
#include<vector>
#include<string>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    vector<int> arr(21);
    int n;
    cin >> n;
    for(int i = 0; i < n; i++){
        string input;
        getline(cin, input);
        int index = input.find(" ");
        string ins, number1;
        ins = input.substr(0, index);
        number1 = input.substr(index+1, input.size());

        int number = stoi(number1);

        for(int i = 0; i <= 21; i++){
            cout << arr[i] << " ";
        }

        if(ins == "add"){
            arr[number] = 1;
        }
        else if(ins == "remove"){
            arr[number] = 0;
        }
        else if(ins == "check"){
            cout << arr[number] << "\n";
        }
        else if(ins == "toggle"){
            if(arr[number] == 0){
                arr[number] = 1;
            }
            else{
                arr[number] = 0;
            }
        }
        else if(ins == "all"){
            for(int j = 1; j <= 20; j++){
                arr[j] = 1;
            }
        }
        else{
            for(int j = 1; j <= 20; j++){
                arr[j] = 0;
            }
        }
    }

    return 0;
}