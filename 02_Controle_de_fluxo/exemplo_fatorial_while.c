#include<stdio.h>

int main(){

    int n, resultado = 1;

    printf("Digite um número: ");
    scanf("%d", &n);

    int i = 1;

    /*
        Exemplo n = 5

        i = 1; Verdadeiro; resultado = 1 * 1;
        i = 2; Verdadeiro; resultado = 1 * 2;
        i = 3; Verdadeiro; resultado = 2 * 3;
        i = 4; Verdadeiro; resultado = 6 * 4;
        i = 5; Verdadeiro; resultado = 24 * 5;
        i = 6; Falso.

    */

    while(i <= n){
        resultado *= i;
        i++;
    }

    printf("Fatorial de n: %d\n", resultado);

    return 0;
}