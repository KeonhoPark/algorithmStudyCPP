#include<bits/stdc++.h>
using namespace std;

void del(deque<int> &dq){
    dq.pop_front();
}

void parse(string &numbers, deque<int> &dq){
    int temp = 0;

    for(int i = 1; i < numbers.size()-1; i++){
        if(numbers[i] == ','){
            dq.push_back(temp);
            temp = 0;
        }
        else{
            temp = (temp * 10 + (numbers[i] - '0'));
        }
    }
    if(temp != 0) dq.push_back(temp);
}

int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);

    int t;
    cin >> t;

    for(int i = 0; i < t; i++){
        deque<int> dq;
        string ins, numbers;
        int n;
        cin >> ins >> n >> numbers;

        parse(numbers, dq);

        int flag = 0;
        int reverseCount = 0;
        for(auto c : ins){
            if(c == 'R'){
                reverseCount++;
            }

            else if(c == 'D'){
                if(dq.size() == 0){
                    flag = 1;
                    break;
                }
                else{
                    if(reverseCount % 2 == 0) dq.pop_front();
                    else dq.pop_back();
                }
            }
        }

        if(flag == 1) cout << "error" << "\n";
        else{
            if(reverseCount % 2 == 1) reverse(dq.begin(), dq.end());
            cout << "[";
            for(int i = 0; i < dq.size(); i++){
                if(i == dq.size() - 1) cout << dq[i];
                else cout << dq[i] << ",";
            }
            cout << "] \n";
        }
    }

    return 0;
}