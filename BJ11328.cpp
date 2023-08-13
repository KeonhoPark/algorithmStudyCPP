#include<bits/stdc++.h>
using namespace std;

int n;

int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);

    cin >> n;
    for(int i = 0; i < n; i++){
        string a;
        string b;
        int str_a[26];
        int str_b[26];
        memset(str_a, 0, sizeof(int) * 26);
        memset(str_b, 0, sizeof(int) * 26);

        cin >> a >> b;
        

        if(a.size() != b.size()){
            cout << "Impossible" << "\n";
            continue;
        }

        for(int j = 0; j < a.size(); j++){
            str_a[a[j] - 'a']++;
            str_b[b[j] - 'a']++;
        }

        int flag = 0;
        for(int j = 0; j < 26; j++){
            if(str_a[j] != str_b[j]){
                cout << "Impossible" << "\n";
                flag = 1;
                break;
            }
        }

        // for(int j = 0; j < 26; j++){
        //     cout << str_a[j] << " ";
        // }
        // cout << "\n";

        // for(int j = 0; j < 26; j++){
        //     cout << str_b[j] << " ";
        // }
        // cout << "\n";

        if(flag == 0) cout << "Possible" << "\n";
    }

    return 0;
}