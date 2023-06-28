#include<iostream>
#include<string>
#include<set>
using namespace std;

int main(){

    int n, m;
    set<string> deut;
    set<string> res;
    cin >> n >> m;

    for(int i = 0; i < n; i++){
        string input;
        cin >> input;
        deut.insert(input);
    }

    for(int i = 0; i < m; i++){
        string input;
        cin >> input;
        if(deut.find(input) != deut.end()){
            res.insert(input);
        }
    }

    cout << res.size() << endl;
    for(auto it = res.begin(); it != res.end(); it++){
        cout << *it << endl;
    }

    return 0;
}