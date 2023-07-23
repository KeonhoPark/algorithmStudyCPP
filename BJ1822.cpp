#include<bits/stdc++.h>
using namespace std;

int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);

    int n, m;
    int a_in, b_in;
    cin >> n >> m;
    set<int> a;

    for(int i = 0; i < n; i++){
        cin >> a_in;
        a.insert(a_in);
    }

    for(int i = 0; i < m; i++){
        cin >> b_in;
        if(a.find(b_in) != a.end()){
            a.erase(b_in);
        }
    }

    if(a.size() == 0) cout << 0;
    else{
        cout << a.size() << "\n";
        for(auto it = a.begin(); it != a.end(); it++){
            cout << *it << " ";
        }
    }

    return 0;
}