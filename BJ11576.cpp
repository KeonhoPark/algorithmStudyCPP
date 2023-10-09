#include<bits/stdc++.h>
using namespace std;

int a, b;
int n;
vector<int> a_list;
vector<int> b_list;

int a_to_int;

int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);

    cin >> a >> b;
    cin >> n;

    for(int i = 0; i < n; i++){
        int input;
        cin >> input;
        a_list.push_back(input);
    }

    for(int i = 0; i < n; i++){
        a_to_int += (int)(pow(a, n - i - 1) * a_list[i]);
    }

    while(true){
        if(a_to_int == 0) break;
        b_list.push_back(a_to_int % b);
        a_to_int /= b;
    }

    for(int i = b_list.size()-1; i >= 0; i--) cout << b_list[i] << " ";

    return 0;
}