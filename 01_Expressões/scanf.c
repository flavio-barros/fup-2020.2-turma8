#include<stdio.h>

int main(){

    int num1;
    double num2;

    printf("Digite um número inteiro: ");
    scanf("%d", &num1);

    printf("Digite um número real: ");
    scanf("%lf", &num2);

    printf("Valor digitado: %d\n", num1);
    printf("Valor digitado: %.3f\n", num2);

    return 0;
}