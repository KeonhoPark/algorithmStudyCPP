#include<iostream>
#include<map>
using namespace std;

int main(){

    map<int, int> xposLen;
    int n = 0;
    int count = 1;
    cin >> n;

    for(int i = 0; i < n; i++){
        int xpos, len = 0;
        cin >> xpos >> len;
        xposLen.insert(make_pair(xpos, len));
    }

    auto it = xposLen.begin();

    int curPos = it->first;
    int curLen = it->second;
    int curTotal = curPos + curLen;
    xposLen.erase(it++);
    
    while(it != xposLen.end()){
        if(curTotal >= it->first){
            curTotal = it->first + it->second;
            xposLen.erase(it++);
        }
        else{
            curTotal = it->first + it->second;
            xposLen.erase(it++);
            count++;
        }
    }

    cout << count;
    return 0;
}