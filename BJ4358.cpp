#include<iostream>
#include<map>
#include<string>
using namespace std;

const int MAXINPUT = 1000000;

int main(){
    map<string, double> namePortion;
    int total = 0;

    for(int i = 0; i < MAXINPUT; i++){
        string input = "";
        getline(cin, input);
        if(input.empty()){
            break;
        }
        else{
            auto it = namePortion.find(input);
            if(it == namePortion.end()){
                namePortion.insert(make_pair(input, 1));
            }
            else{
                namePortion[input]++;
            }
            total++;
        }
        cin.clear();
    }

    for(auto it = namePortion.begin(); it != namePortion.end(); it++){
        double cnt = it->second;
        it->second = (cnt / total) * 100;
        cout << fixed;
        cout.precision(4);
        cout << it->first << " " << it->second << endl;
    }

    return 0;
}