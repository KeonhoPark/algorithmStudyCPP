#include<bits/stdc++.h>
using namespace std;

int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);

    int n;
    vector<int> a;
    vector<int> temp;

    cin >> n;
    char visited[51] = {0,};

    for(int i = 0; i < n; i++){
        int input;
        cin >> input;
        a.push_back(input);
        temp.push_back(input);
    }

    sort(temp.begin(), temp.end());

    for(int i = 0; i < a.size(); i++){
        for(int j = 0; j < temp.size(); j++){
            if((a[i] == temp[j]) && (visited[j] == 0)){
                cout << j << " ";
                visited[j] = 1;
                break;
            }
        }
    }

    return 0;
}