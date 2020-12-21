#include<stdio.h>

int soma_impares(int n);

int main(void){

    int n;
    scanf("%d", &n);

    printf("%d\n", soma_impares(n));

    return 0;
}

int soma_impares(int n){
    int soma = 0;

    for(int i=1, contador=0; contador<n; i++){
        if(i%2 == 1){
            soma += i;
            soma2(i);
            contador++;
        }
    }
    return soma;
}