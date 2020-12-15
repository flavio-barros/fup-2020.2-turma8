#include<stdio.h>

float calcula_media(float, float, float);
void calcula_media2(void);

int main(void){

    float n1 = 9.5, n2 = 4.2, n3 = 5.7;

    float media = calcula_media(n1, n2, n3);

    printf("n1: %.2f\n", n1);

    printf("Média: %.2f\n", media);

    media = calcula_media(7.5, 2, 9);

    calcula_media2();

    return 0;
}

float calcula_media(float nota1, float nota2, float nota3){

    return (nota1 + nota2 + nota3) / 3;
}

void calcula_media2(void){
    float n1, n2, n3;

    printf("Digite a primeira nota: ");
    scanf("%f", &n1);
    printf("Digite a segunda nota: ");
    scanf("%f", &n2);
    printf("Digite a terceira nota: ");
    scanf("%f", &n3);

    float media = (n1 + n2 + n3) / 3;

    printf("Média: %.2f\n", media);
}
