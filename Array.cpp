#include<iostream>
using namespace std;

void insert(int idx, int num, int arr[], int& len){
    for(int i = len; i > idx; i--){
        arr[i] = arr[i-1];
    }
    arr[idx] = num;
}

void erase(int idx, int arr[], int& len){
    for(int i = idx; i < len; i++){
        arr[i] = arr[i+1];
    }
}

void printArr(int arr[], int& len){
    for(int i = 0; i < len; i++){
        cout << arr[i] << " ";
        cout << "\n\n";
    }
}

void insert_test(){

}

void erase_test(){

}

int main(){
    insert_test();
    erase_test();
}

