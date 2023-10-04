#include<bits/stdc++.h>
using namespace std;

int n;
queue<int> cards;
vector<int> ground;

int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);

    cin >> n;

    for(int i = 1; i <= n; i++){
        cards.push(i);
    }

    while(cards.size() > 1){
        ground.push_back(cards.front());
        cards.pop();
        cards.push(cards.front());
        cards.pop();
    }

    for(auto c : ground) cout << c << " ";
    cout << cards.front();

    return 0;
}