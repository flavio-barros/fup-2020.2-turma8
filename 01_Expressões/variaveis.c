#include<stdio.h>

int main(){

    char a;
    short int b;
    short c;
    int d = 10, d1, d2, d3;
    long int e;
    long f;
    float g;
    double h;

    b = 12;
    d = 2.4;

    // Imprimindo os tamanhos de cada tipo
    printf("Tamanho do tipo char: %ld\n", sizeof(a));
    printf("Tamanho do tipo short int: %ld\n", sizeof(b));
    printf("Tamanho do tipo int: %ld\n", sizeof(d));
    printf("Tamanho do tipo long int: %ld\n", sizeof(e));

    printf("Tamanho do tipo float: %ld\n", sizeof(g));
    printf("Tamanho do tipo double: %ld\n", sizeof(h));

    // Imprimindo os valores das variáveis sem inicialização
    printf("Valor da variável b: %d\n", b);
    printf("Valor da variável d: %d\n", d);
    printf("Valor da variável e: %ld\n", e);

    return 0;
}