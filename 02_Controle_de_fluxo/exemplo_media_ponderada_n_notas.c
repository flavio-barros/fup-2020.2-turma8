#include<stdio.h>
/*
    Programa que lê n notas e n pesos, calcula e escreve a média ponderada.
*/
int main(){

    int qtd, pesos = 0, valorpeso;
    float media = 0, notas;

    printf("Digite a qtd de notas: ");
    scanf("%d", &qtd);

    for(int i = 0; i < qtd; i++){
        printf("Digite a %dª nota: ", i + 1);
        scanf("%f", &notas);

        printf("Digite o %dº peso: ", i + 1);
        scanf("%d", &valorpeso);

        printf("\n");
        
        pesos += valorpeso;
        media += (notas * valorpeso);
    }

    media /= pesos;

    printf("Media ponderada: %.2f\n" , media); 

    return 0;
}