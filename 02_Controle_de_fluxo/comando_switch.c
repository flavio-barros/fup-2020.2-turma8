#include<stdio.h>

int main(){

    int numero;

    printf("Digite um número: ");
    scanf("%d", &numero);

    switch (numero%2){
        case 0:
            printf("O número é um par\n");
        break;
        case 1:
            printf("O número é impar\n");
        break;
    }

    return 0;
}