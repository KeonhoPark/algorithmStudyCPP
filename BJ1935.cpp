#include<bits/stdc++.h>
using namespace std;

int n;
string s;
stack<long double> st;
vector<int> numbers;

int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);

    cin >> n;
    cin >> s;

    for(int i = 0; i < n; i++){
        int input;
        cin >> input;
        numbers.push_back(input);
    }

    for(int i = 0; i < s.size(); i++){
        if('A' <= s[i] && s[i] <= 'Z'){
            st.push(numbers[s[i] - 'A']);
        }
        else{
            if(!st.empty()){
                double tmp = st.top(); st.pop();

                if(s[i] == '+'){
                    tmp = st.top() + tmp;
                }
                else if(s[i] == '-'){
                    tmp = st.top() - tmp;
                }
                else if(s[i] == '*'){
                    tmp = st.top() * tmp;
                }
                else{
                    tmp = st.top() / tmp;
                }

                st.pop();
                st.push(tmp);
            }
        }
    }

    cout << fixed;
    cout.precision(2);
    cout << st.top();

    return 0;
}