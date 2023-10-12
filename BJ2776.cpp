#include<bits/stdc++.h>
using namespace std;

int t;

int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);

    cin >> t;
    for(int i = 0; i < t; i++){
        vector<int> note1;
        vector<int> note2;
        int size1;
        int size2;

        cin >> size1;
        for(int i = 0; i < size1; i++){
            int input;
            cin >> input;
            note1.push_back(input);
        }

        cin >> size2;
        for(int i = 0; i < size2; i++){
            int input;
            cin >> input;
            note2.push_back(input);
        }

        sort(note1.begin(), note1.end());

        for(int i = 0; i < size2; i++){
            if(binary_search(note1.begin(), note1.end(), note2[i])) cout << 1 << "\n";
            else cout << 0 << "\n";
        }
    }

    return 0;
}