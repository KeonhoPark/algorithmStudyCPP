#include<bits/stdc++.h>
using namespace std;

int r, n;
string sg;
vector<string> friends;
int score, max_score;

void add_score(char opponent, int round){
    char s = sg[round];

    if((s == 'R' && opponent == 'S') || (s == 'S' && opponent == 'P') || (s == 'P' && opponent == 'R'))
        score += 2;
    else if(s == opponent)
        score += 1;

    return;
}

int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);

    cin >> r;
    cin >> sg;
    cin >> n;

    for(int i = 0; i < n; i++){
        string input;
        cin >> input;
        friends.push_back(input);
    }

    for(int i = 0; i < r; i++){
        int rsp[3];
        memset(rsp, 0, sizeof(rsp));

        for(int j = 0; j < n; j++){
            if(friends[j][i] == 'R') {
                rsp[0]++;
                add_score('R', i);
            }
            else if(friends[j][i] == 'S') {
                rsp[1]++;
                add_score('S', i);
            }
            else {
                rsp[2]++;
                add_score('P', i);
            }
        }

        max_score += max({(rsp[0] * 2) + rsp[2], (rsp[1] * 2) + rsp[0], (rsp[2] * 2) + rsp[1]});
    }

    cout << score << "\n" << max_score;
    return 0;
}