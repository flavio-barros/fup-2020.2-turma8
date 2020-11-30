#include<stdio.h>

int main(){

    //printf("%d\n", 5/2);

    int a;
    float b, c;

    a = 3.5;        // a = 3
    b = a/2.0f;     // b = 1.5
    c = 1/3 + b;    // c = 0 + 1.5

    printf("Valor da variável c: %.2f\n", c);

    printf("10 módulo 2 = %d\n", 10%2);
    printf("11 módulo 2 = %d\n", 11%2);

    return 0;
}