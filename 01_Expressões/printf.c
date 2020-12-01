#include<stdio.h>

int main(){

    int a = 10;
    float b = 3.14;
    double c = 3.1416;
    char d = 'a';

    printf("Imprimindo os valores das variáveis\n");
    printf("Valor de a: %10d\nValor de b: %.2f\nValor de c: %10.3f\nValor de d: %c\n", a, b, c, d);

    return 0;
}