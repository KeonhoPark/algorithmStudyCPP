#include<iostream>
#include<map>
#include<vector>
#include<algorithm>
using namespace std;

int main(){

    map<int, double> numCount;
    int n, c = 0;
    cin >> n >> c;

    for(int i = 0; i < n; i++){
        int num = 0;
        cin >> num;
        auto it = numCount.find(num);

        //첫번째 입력값이면 맵에 (입력값, 1)을 삽입
        if(it == numCount.end() && i == 0){
            numCount.insert(make_pair(num, 1.0));
        }
        //첫번째 입력은 아니지만 처음받는 입력값이면 이전 입력값의 value에 0.000001을 더해주고 새로운 입력값의 value는 1로 설정
        else if(it == numCount.end() && i != 0){
            for(auto it2 = numCount.begin(); it2 != numCount.end(); it2++){
                it2->second = (it2->second) + 0.000001;
            }
            numCount.insert(make_pair(num, 1.0));
        }
        //이미 입력된 숫자면 value값을 1 증가
        else{
            it->second++;
        }
    }

    //map을 value를 기준으로 내림차순하기 위해 map을 vector로 복사.
    //sort() 를 사용하여 복사된 vector를 value를 기준으로 정렬
    vector<pair<int, double>> v(numCount.begin(), numCount.end());
    sort(v.begin(), v.end(), [](pair<int, double> a, pair<int, double> b){return a.second > b.second;});

    //key값이 입력된 숫자이기 때문에 key를 출력
    //출력횟수는 value의 정수형변환만큼 출력.
    for(auto it = v.begin(); it != v.end(); it++){
        for(int i = 0; i < int(it->second); i++){
            cout << it->first << " ";
        }
    }

    return 0;
}