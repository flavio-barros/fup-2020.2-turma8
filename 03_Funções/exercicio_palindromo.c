#include<stdio.h>

void inverso(int n);

int main(void){

    inverso(147);

    return 0;
}

// Função que recebe um número inteiro e escreve a sua representação invertida
// 456 -> 654
// 14587 -> 78541
void inverso(int n){
    // n = 147
    // d = 147%10 = 7; n = 147/10 = 14
    // d = 14%10 = 4; n = 14/10 = 1
    // d = 1%10 = 1; n = 1/10 = 0
    while(n > 0){
        int d = n % 10;
        printf("%d", d);
        n /= 10;
    }
    printf("\n");
}

// Função que testa se a representação do número é palíndromo.
// A função retorna 1 se for, e 0 caso contrário
// 147 -> 741
// 14541 -> 14541 
int palindromo(int n){

    int inverso = 0;
    int orginal = n;

    // 147; inverso = 0;
    // d = 7; inverso = 7;
    // d = 4; inverso = 74;
    // d = 1; inverso = 741;
    while(n > 0){
        int d = n%10;
        inverso = (inverso*10) + d;
        n /= 10;
    }

    if(orginal == inverso) return 1;
    else return 0;

}