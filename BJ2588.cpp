#include<stdio.h>

int main(){
    int a, b;
    scanf("%d", &a);
    scanf("%d", &b);
    int tmp = b;

    for(int i = 0; i < 3; i++){
        printf("%d\n", a * (tmp % 10));
        tmp /= 10;
    }
    printf("%d", a * b);

    return 0;
}
