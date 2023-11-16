#include<bits/stdc++.h>
using namespace std;

int n, m;
vector<int> players;
vector<int> v;
vector<int> fighting_room;
deque<int> waiting_room;

int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);

    cin >> n >> m;

    for(int i = 1; i <= n; i++){
        int input;
        cin >> input;
        players.push_back(input);
    }

    for(int i = 0; i < n - m + 1; i++){
        int input;
        cin >> input;
        v.push_back(input - 1);
    }

    for(int i = 0; i < n; i++){
        if(i > m - 1){
            waiting_room.push_back(players[i]);
        }
        else{
            fighting_room.push_back(players[i]);
        }
    }

    sort(fighting_room.begin(), fighting_room.end());

    int idx = 0;
    while(!waiting_room.empty()){
        int next_player = waiting_room.front(); waiting_room.pop_front();
        fighting_room[v[idx]] = next_player;
        idx++;
        sort(fighting_room.begin(), fighting_room.end());
    }

    fighting_room[v[n - m]] = 0;
    sort(fighting_room.begin(), fighting_room.end());

    for(auto f : fighting_room){
        if(f != 0) cout << f << " ";
    }

    return 0;
}