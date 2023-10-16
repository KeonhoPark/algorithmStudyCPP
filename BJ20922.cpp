#include<bits/stdc++.h>
using namespace std;

int n, k;
int cnt[100001];
vector<int> numbers;
long long s, e;
long long result = -1;

int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);

    cin >> n >> k;

    for(int i = 0; i < n; i++){
        int input;
        cin >> input;
        numbers.push_back(input);
    }

    for(int i = 0; i < n; i++){
        cnt[numbers[i]]++;
        e++;
        if(cnt[numbers[i]] > k){
            while(cnt[numbers[i]] > k){
                cnt[numbers[s]]--;
                s++;
            }
        }

        result = max(result, e - s);
    }

    cout << result;

    return 0;
}