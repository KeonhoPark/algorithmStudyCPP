#include<bits/stdc++.h>
using namespace std;

int t;

int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);

    cin >> t;
    for(int i = 0; i < t; i++){
        map<string, int> cat_num;
        int n;
        cin >> n;
        if(n == 0){
            cout << 0 << "\n";
            continue;
        }

        for(int j = 0; j < n; j++){
            string name, category;
            cin >> name >> category;

            int flag = 0;
            for(auto it = cat_num.begin(); it != cat_num.end(); it++){
                if(category == it->first){
                    it->second++;
                    flag = 1;
                    break;
                }
            }

            if(flag == 0) cat_num.insert(make_pair(category, 1));
        }

        if(cat_num.size() == 1){
            cout << cat_num.begin()->second << "\n";
            continue;
        }

        int total = 1;
        for(auto it = cat_num.begin(); it != cat_num.end(); it++){
            total *= (it->second + 1);
        }

        cout << total - 1 << "\n";
    }

    return 0;
}