#include<iostream>
#include<map>
#include<string>
using namespace std;

int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);
    map<string, int> nameIndex;
    map<int, string> indexName;
    int n, m = 0;
    cin >> n >> m;
    for(int i = 0; i < n; i++){
        string name;
        cin >> name;
        nameIndex.insert(make_pair(name, i+1));
        indexName.insert(make_pair(i+1, name));
    }

    for(int i = 0; i < m; i++){
        string input;
        cin >> input;
        auto it = input.begin();
        if(*it < 'A'){
            cout << indexName[stoi(input)] << "\n";
        }
        else{
            cout << nameIndex[input] << "\n";
        }
    }

    return 0;
}