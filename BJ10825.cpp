#include<bits/stdc++.h>
using namespace std;

int n;

struct Student{
    string name;
    int k;
    int e;
    int m;
};

vector<Student> students;

bool cmp(Student &a, Student &b){
    if(a.k == b.k){
        if(a.e == b.e){
            if(a.m == b.m) return a.name < b.name;
            return a.m > b.m;
        }
        return a.e < b.e;
    }
    return a.k > b.k;
}

int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);

    cin >> n;

    for(int i = 0; i < n; i++){
        string i_name;
        int i_k, i_e, i_m;
        cin >> i_name >> i_k >> i_e >> i_m;

        students.push_back({i_name, i_k, i_e, i_m});
    }

    sort(students.begin(), students.end(), cmp);

    for(auto s : students) cout << s.name << "\n";

    return 0;
}