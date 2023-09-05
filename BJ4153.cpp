#include<bits/stdc++.h>
using namespace std;

int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);

    while(true){
        int total = 0;
        int edges[3];
        cin >> edges[0] >> edges[1] >> edges[2];
        if(edges[0] == 0) break;

        for(int i = 0; i < 3; i++){
            total += (edges[i] * edges[i]);
        }

        sort(edges, edges + 3, greater<int>());

        if((total - (edges[0] * edges[0])) == (edges[0] * edges[0])) cout << "right" << "\n";
        else cout << "wrong" << "\n";
    }

    return 0;
}