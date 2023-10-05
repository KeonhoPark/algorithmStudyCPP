#include<bits/stdc++.h>
using namespace std;
#define MAX 1000001

int n, k;
int gold[1001];
int silver[1001];
int bronze[1001];
int result = 1;

int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);

    cin >> n >> k;
    for(int i = 1; i <= n; i++){
        int index, g, s, b;
        cin >> index >> g >> s >> b;
        gold[index] = g;
        silver[index] = s;
        bronze[index] = b;
    }

    for(int i = 1; i <= n; i++){
        if(gold[i] > gold[k]) result++;
        else if(gold[i] == gold[k]){
            if(silver[i] > silver[k]) result++;
            else if(silver[i] == silver[k]){
                if(bronze[i] > bronze[k]) result++;
            }
        }
    }

    cout << result;

    return 0;
}