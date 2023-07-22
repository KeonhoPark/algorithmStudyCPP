#include<bits/stdc++.h>
using namespace std;

int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);

    int n, l;
    cin >> n >> l;

    int heights[n] = {0};
    for(int i = 0; i < n; i++){
        cin >> heights[i];
    }

    sort(&heights[0], &heights[n]);

    for(int i = 0; i < n; i++){
        if(l >= heights[i]) l++;
    }

    cout << l;
    
    return 0;
}