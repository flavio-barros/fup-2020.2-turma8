#include<stdio.h>

int main(){

    int n;

    printf("Digite a quantidade de notas: ");
    scanf("%d", &n);

    float nota, media = 0;
    int i = 0;

    while(i < n){
        printf("Digite a nota %d: ", i+1);
        scanf("%f", &nota);
        media += nota;
        i++;
    }

    media /= n;

    printf("Média: %.2f\n", media);

    return 0;
}