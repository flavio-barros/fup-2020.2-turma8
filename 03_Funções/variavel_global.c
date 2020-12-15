#include<stdio.h>

void exemplo1(void);
void exemplo2(void);

int contador = 0;

int main(){

    printf("contador: %d\n", contador);
    exemplo1();
    exemplo1();
    printf("contador: %d\n", contador);
    exemplo2();
    exemplo2();
    printf("contador: %d\n", contador);

    return 0;
}

void exemplo1(void){ 

    contador += 10;
}

void exemplo2(void){

    contador += 20;
}