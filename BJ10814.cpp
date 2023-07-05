#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
    int n = 0;
    vector<pair<int, string>> ageName;
    cin>>n;
    
    for(int i = 0; i < n; i++){
        int age;
        string name;
        cin>>age>>name;
        ageName.push_back(make_pair(age, name));
    }

    stable_sort(ageName.begin(), ageName.end(), [](pair<int, string> a, pair<int, string> b){return a.first<b.first;});

    for(auto it = ageName.begin(); it != ageName.end(); it++){
        cout<<it->first<<' '<<it->second<<"\n";
    }

    return 0;
}