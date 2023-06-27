#include<iostream>
using namespace std;

int main(){
    int total, n, sum = 0;
    cin >> total;
    cin >> n;

    for(int i = 0; i < n; i++){
        int price, num = 0;
        cin >> price; cin >> num;
        sum += (price * num);
    }

    if(total == sum){
        cout << "Yes";
    }
    else{
        cout << "No";
    }


    return 0;
}