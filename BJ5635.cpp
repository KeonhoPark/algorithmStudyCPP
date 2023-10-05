#include<bits/stdc++.h>
using namespace std;

struct Student{
    string name;
    int day;
    int month;
    int year;
};

int n;
vector<Student> students;

bool cmp(Student &a, Student &b){
    if(a.year == b.year){
        if(a.month == b.month){
            return a.day > b.day;
        }
        return a.month > b.month;
    }
    return a.year > b.year;
}

int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);

    cin >> n;
    for(int i = 0; i < n; i++){
        string name;
        int day, month, year;
        cin >> name >> day >> month >> year;

        students.push_back({name, day, month, year});
    }

    sort(students.begin(), students.end(), cmp);

    cout << students[0].name << "\n";
    cout << students[n-1].name << "\n";

    return 0;
}