#include<stdio.h>

int main(){

    int a = 10, b, c, d;
    b = a++ * 2; // (10 * 2 = 20), a = 11
    c = --a * 2; // a = 10, (10 * 2 = 20)

    printf("Valor da variável a: %d\n", a);
    printf("Valor da variável b: %d\n", b);
    printf("Valor da variável c: %d\n", c);

    return 0;
}