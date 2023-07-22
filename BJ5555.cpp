#include<bits/stdc++.h>
using namespace std;

int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);

    int result = 0;
    vector<string> rings;
    string input;
    int n;
    cin >> input >> n;

    for(int i = 0; i < n; i++){
        string ring;
        cin >> ring;
        rings.push_back(ring);
    }

    for(int i = 0; i < n; i++){
        string ring = rings[i];
        int f = 0;
        for(int j = 0; j < ring.size(); j++){
            if(f == 1){
                f = 0;
                break;
            }

            if(input[0] == ring[j]){
                int flag = 0;
                int index = 1;
                while(index < input.size()){
                    if(input[index] != ring[(j + index) % ring.size()]){
                        flag = 1;
                        break;
                    }
                    else index++;
                }
                if(flag == 0){
                    result++;
                    f = 1;
                }
            }
        }
    }

    cout << result;

    return 0;
}