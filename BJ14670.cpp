#include<bits/stdc++.h>
using namespace std;

int n, r;
unordered_map<int, int> symptom_name;


int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);

    cin >> n;
    for(int i = 0; i < n; i++){
        int symp, name;
        cin >> symp >> name;
        symptom_name.insert(make_pair(symp, name));
    }

    cin >> r;
    for(int i = 0; i < r; i++){
        vector<int> symptoms;
        vector<int> result;
        int symp_num;
        cin >> symp_num;
        for(int j = 0; j < symp_num; j++){
            int symp;
            cin >> symp;
            symptoms.push_back(symp);
        }

        int flag = 0;
        for(int j = 0; j < symp_num; j++){
            if(symptom_name.find(symptoms[j]) == symptom_name.end()){
                cout << "YOU DIED";
                flag = 1;
                break;
            }
            else{
                result.push_back(symptom_name[symptoms[j]]);
            }
        }

        if(flag == 0){
            for(int k = 0; k < result.size(); k++){
                cout << result[k];
                if(k < result.size() - 1) cout << " ";
            }
        }

        cout << "\n";
    }

    return 0;
}