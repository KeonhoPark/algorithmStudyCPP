#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

bool cmp(vector<int> v1, vector<int> v2){
    if(v1[1] == v2[1]) return v1[0] < v2[0];
    else return v1[1] < v2[1];
}

int main(){
    int n = 0; 
    cin >> n;
    vector<vector<int>> points(n, vector<int>(2, 0));

    for(int i = 0; i < n; i++){
        int x, y = 0;
        cin >> x >> y;
        points[i][0] = x;
        points[i][1] = y;
    }

    sort(points.begin(), points.end(), cmp);

    for(int i = 0; i < n; i++){
        cout << points[i][0] << " " << points[i][1] << "\n";
    }
    return 0;
}