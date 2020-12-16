#include<stdio.h>

void exemplo(void);
int fat(int n);

int main(void){

    fat(3);
    fat(4);
    fat(5);

    return 0;
}

void exemplo(void){
    static int contador = 0;

    contador++;
    printf("Quantidade de execuções da função 'exemplo': %d\n", contador);
}

int fat(int n){
    static int contador = 0;
    static int f = 1;

    if(contador > 0){
        printf("Valor do fatorial da última execução: %d\n", f);
    }

    f = 1;

    for(int i=1; i <= n; i++){
        f *= i;
    }

    contador++;
    return f;
}