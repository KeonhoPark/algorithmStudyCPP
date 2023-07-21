#include<bits/stdc++.h>
using namespace std;

int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);

    string a;
    string b;
    cin >> a;
    cin >> b;
    int aCount['z' - 'a' + 1] = {0};
    int bCount['z' - 'a' + 1] = {0};
    int result = 0;

    for(int i = 0; i < a.size(); i++){
        aCount[a[i] - 'a']++;
    }

    for(int i = 0; i < b.size(); i++){
        bCount[b[i] - 'a']++;
    }

    for(int i = 0; i <= 'z' - 'a'; i++){
        if(aCount[i] != bCount[i]) result += abs(aCount[i] - bCount[i]);
    }

    cout << result;

    return 0;
}