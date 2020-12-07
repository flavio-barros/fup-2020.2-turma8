#include<stdio.h>
/*
    Programa que lê duas notas, calcula a média aritmética e a escreve.
    E ainda, escreve a situação do aluno:
    Se a nota for maior ou igual a 7: Aprovado(a)
    Se a nota for maior ou igual a 4 e menor que 7: Avaliação final
    Se a nota for menor que 4: Reprovado(a)
*/
int main(){

    float n1, n2, media;

    printf("Digite a primeira nota: ");
    scanf("%f", &n1);

    printf("Digite a segunda nota: ");
    scanf("%f", &n2);

    media = (n1 + n2) / 2;

    printf("Média: %.2f\n", media);

    if(media >= 7){
        printf("Situação: Aprovado(a)\n");
    }else if(media >= 4){
        printf("Situação: Avaliação final\n");

        float af;

        printf("Digite a nota da avaliação final: ");
        scanf("%f", &af);

        media = (media + af) / 2;

        printf("Média final: %.2f\n", media);

        if(media >= 5){
            printf("Situação final: Aprovado(a)\n");
        }else{
            printf("Situação final: Reprovado(a)\n");
        }
    }else{
        printf("Situação: Reprovado(a)\n");
    }

    return 0;
}