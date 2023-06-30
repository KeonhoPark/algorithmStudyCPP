#include<iostream>
#include<map>
#include<string>
using namespace std;

int main(){
    int n, m = 0;
    cin >> n >> m;
    map<string, string> AP;
    for(int i = 0; i < n; i++){
        string address = "";
        string password = "";
        cin >> address >> password;
        AP.insert(make_pair(address, password));
    }

    for(int i = 0; i < m; i++){
        string input = "";
        cin >> input;
        cout << AP.find(input)->second << endl;
    }
    return 0;
}