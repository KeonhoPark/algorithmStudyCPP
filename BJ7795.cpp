#include<bits/stdc++.h>
using namespace std;

int t;

int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);

    cin >> t;
    for(int k = 0; k < t; k++){
        int result = 0;
        int a_num, b_num;
        vector<int> a_size;
        vector<int> b_size;

        cin >> a_num >> b_num;

        for(int i = 0; i < a_num; i++){
            int input;
            cin >> input;
            a_size.push_back(input);
        }

        for(int i = 0; i < b_num; i++){
            int input;
            cin >> input;
            b_size.push_back(input);
        }

        sort(a_size.begin(), a_size.end(), greater<int>());
        sort(b_size.begin(), b_size.end());

        for(int i = 0; i < a_num; i++){
            int flag = 0;
            for(int j = 0; j < b_num; j++){
                if(a_size[i] <= b_size[0]){
                    flag = 1;
                    break;
                }
                if(a_size[i] > b_size[j]) result++;
                else break;
            }

            if(flag == 1) break;
        }

        cout << result << "\n";
    }

    return 0;
}