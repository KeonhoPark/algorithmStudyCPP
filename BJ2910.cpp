#include<iostream>
#include<map>
using namespace std;

int main(){

    map<int, int> numCount;
    int n, c = 0;
    cin >> n >> c;

    for(int i = 0; i < n; i++){
        int num = 0;
        cin >> num;
        auto it = numCount.find(num);

        if(it == numCount.end()){
            numCount[num] = 1;
        }
        else{
            it->second++;
        }
    }

    for(auto it = numCount.begin(); it != numCount.end(); it++){
        cout << "key : " << it->first << " value : " << it->second << endl;
    }
}