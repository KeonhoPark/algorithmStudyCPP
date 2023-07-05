#include<iostream>
#include<vector>
using namespace std;

int main(){
    int n = 0;
    cin >> n;
    for(int i = 0; i < n; i++){
        int input = 0;
        cin >> input;

        int zeroCount[41];
        int oneCount[41];
        zeroCount[0] = 1;
        zeroCount[1] = 0;
        oneCount[0] = 0;
        oneCount[1] = 1;

        for(int i = 2; i <= 40; i++){
            zeroCount[i] = zeroCount[i-1] + zeroCount[i-2];
            oneCount[i] = oneCount[i-1] + oneCount[i-2];
        }

        cout<<zeroCount[input]<<" "<<oneCount[input]<<"\n";
        
    }

    return 0;
}