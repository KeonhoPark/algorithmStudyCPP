#include<iostream>
#include<stdio.h>
using namespace std;

// int main(void){
//     long double a, b;

//     cin >> a;
//     cin >> b;

//     cout << a / b;
// }

int main(void){
    int a, b;
    scanf("%d %d", &a, &b);
    printf("%.9f", a / (double)b);
} 