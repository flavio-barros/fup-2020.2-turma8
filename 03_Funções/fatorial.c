#include<stdio.h>

int fat(int n);

int main(void){
    
    int n = 5;

    int r = fat(n);

    printf("r = %d\n", r);

    return 0;
}

int fat(int n){
    int f = 1;

    for(int i=1; i <= n; i++){
        f *= i;
    }

    return f;
}