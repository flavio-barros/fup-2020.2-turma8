#include<stdio.h>
/*
    Programa  que recebe três notas e recebe o peso cada uma dessas notas
    e imprime a média ponderada

    Exemplo de cálculo da média ponderada
    Notas: 5 7 8
    Pesos: 2 3 4
    MP = (5x2 + 7x3 + 8x4) / 2 + 3 + 4
*/
int main(){

    float n1, n2, n3, media;

    printf("Digite a primeira nota: ");
    scanf("%f", &n1);

    printf("Digite a segunda nota: ");
    scanf("%f", &n2);

    printf("Digite a terceira nota: ");
    scanf("%f", &n3);

    int p1, p2, p3;

    printf("Digite o peso da primeira nota: ");
    scanf("%d", &p1);

    printf("Digite o peso da segunda nota: ");
    scanf("%d", &p2);

    printf("Digite o peso da terceira nota: ");
    scanf("%d", &p3);

    media = (n1*p1 + n2*p2 + n3*p3)/(p1 + p2 + p3);

    printf("Média ponderada: %.2f\n", media);
    
    return 0;
}
