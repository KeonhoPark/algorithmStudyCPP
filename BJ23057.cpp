#include<iostream>
#include<vector>
#include<set>
using namespace std;

int n, sum = 0;
int numbers[21];
vector<int> result;
set<int> result_set;

void dfs(int i, int number){
    result.push_back(number);
    if(i == n) return;
    dfs(i + 1, number + numbers[i + 1]);
    dfs(i + 1, number);
}

int main(){
    cin >> n;
    for(int i = 0; i < n; i++){
        cin >> numbers[i];
        sum += numbers[i];
    }

    for(int i = 0; i < n; i++){
        dfs(i, numbers[i]);
    }

    for(auto it = result.begin(); it != result.end(); it++){
        result_set.insert(*it);
    }

    cout << sum - result_set.size();

    return 0;
}