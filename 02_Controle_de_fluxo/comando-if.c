#include<stdio.h>

int main(){

    int a;

    printf("Digite um número: ");
    scanf("%d", &a);

    if (a < 10){
        printf("Número digitado é menor que 10\n");
    }else if(a >= 10 && a < 20){
        printf("Número digitado é maior ou igual 10 e menor que 20\n");
    }else if(a >= 20 && a < 30){
        printf("Número digitado é maior ou igual 20 e menor que 30\n");
    }else{
        printf("Número digitado é maior ou igual a 30\n");
    }

    return 0;
}