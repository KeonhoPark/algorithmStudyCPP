#include<iostream>
#include<string>
#include<map>
using namespace std;

int main(){
    int n = 0;
    cin >> n;
    map<string, int> nameCount;
    for(int i = 0; i < n; i++){
        string name = "";
        cin >> name;
        auto it = nameCount.find(name);
        if(it == nameCount.end()){
            nameCount.insert(make_pair(name, 1));
        }
        else{
            it->second++;
        }
    }

    for(int i = 0; i < n-1; i++){
        string name = "";
        cin >> name;
        auto it = nameCount.find(name);
        it->second--;
    }

    for(auto it = nameCount.begin(); it != nameCount.end(); it++){
        if(it->second != 0){
            cout << it->first << endl; 
            break;
        }
    }
    return 0;
}