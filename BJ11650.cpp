#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
    vector<vector<int>> points;
    int n = 0;
    cin >> n;
    for(int i = 0; i < n; i++){
        vector<int> xy;
        int x, y = 0;
        cin >> x >> y;
        xy.push_back(x);
        xy.push_back(y);
        points.push_back(xy);
    }

    sort(points.begin(), points.end());
    for(int i = 0; i < n; i++){
        cout << points[i][0] << " " << points[i][1] << "\n";
    }

    return 0;
}