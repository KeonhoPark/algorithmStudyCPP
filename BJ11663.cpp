#include<bits/stdc++.h>
using namespace std;

int n, m;
vector<long long> points;

int getIdx(long long point, int isStart){
    int start = 0;
    int end = n - 1;

    while(start <= end){
        int mid = (start + end) / 2;

        if(point == points[mid]) return mid;
        else if(point > points[mid]) start = mid + 1;
        else if(point < points[mid]) end = mid - 1;
    }

    if(isStart) return start;
    else return end;
}

int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);

    cin >> n >> m;

    for(int i = 0; i < n; i++){
        long long input;
        cin >> input;
        points.push_back(input);
    }

    sort(points.begin(), points.end());

    for(int i = 0; i < m; i++){
        long long start, end;
        cin >> start >> end;

        if(start > points[n - 1] || end < points[0]){
            cout << 0 << "\n";
            continue;
        }

        int start_idx = getIdx(start, 1);
        int end_idx = getIdx(end, 0);

        cout << end_idx - start_idx + 1 << "\n";
    }
    
    return 0;
}