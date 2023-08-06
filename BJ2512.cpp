#include<bits/stdc++.h>
using namespace std;

int n;
vector<int> requests;
int total_request;
int total_money;
int result;

int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);

    cin >> n;
    for(int i = 0; i < n; i++){
        int input;
        cin >> input;
        total_request += input;
        requests.push_back(input);
    }
    cin >> total_money;

    sort(requests.begin(), requests.end(), greater<int>());

    if(total_money >= total_request){
        cout << requests[0];
    }

    else{
        int start = 1;
        int end = requests[0];
        while (start <= end){
            total_request = 0;
            int mid = (start + end) / 2;

            for(auto r : requests){
                if(r < mid) total_request += r;
                else total_request += mid;
            }

            if(total_request <= total_money){
                start = mid + 1;
            }
            else{
                end = mid - 1;
            }
            result = end;
        }
        cout << result;
    }

    return 0;
}

