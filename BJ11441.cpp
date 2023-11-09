#include<bits/stdc++.h>
using namespace std;

struct StartEnd{
    int start;
    int end;
    int index;
};

int n, t;
int numbers[100001];
vector<StartEnd> start_end;
long long totals[100001];
long long total;

bool cmp(StartEnd &a, StartEnd &b){
    if(a.start == b.start) return a.end < b.end;
    return a.start < b.start;
}

int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);

    cin >> n;
    for(int i = 1; i <= n; i++){
        cin >> numbers[i];
    }

    cin >> t;

    for(int i = 0; i < t; i++){
        int start, end;

        cin >> start >> end;

        StartEnd se;
        se.start = start;
        se.end = end;
        se.index = i;
        start_end.push_back(se);
    }

    sort(start_end.begin(), start_end.end(), cmp);

    int prev_start = start_end[0].start;
    int prev_end = start_end[0].end;
    int index = start_end[0].index;
    for(int i = prev_start; i <= prev_end; i++){
        total += numbers[i];
    }
    totals[index] = total;

    for(int i = 1; i < t; i++){
        int cur_start = start_end[i].start;
        int cur_end = start_end[i].end;
        index = start_end[i].index;

        if(prev_start < cur_start){
            for(int j = prev_start; j < cur_start; j++)
                total -= numbers[j];
        }
        else if(prev_start > cur_start){
            for(int j = cur_start; j < prev_start; j++)
                total += numbers[j];
        }

        if(prev_end < cur_end){
            for(int j = prev_end + 1; j <= cur_end; j++)
                total += numbers[j];
        }
        else if(prev_end > cur_end){
            for(int j = prev_end; j > cur_end; j--)
                total -= numbers[j];
        }

        totals[index] = total;
        prev_start = cur_start;
        prev_end = cur_end;
    }

    for(int i = 0; i < t; i++) cout << totals[i] << "\n";

    return 0;
}