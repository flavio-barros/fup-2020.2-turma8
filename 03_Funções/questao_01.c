#include <stdio.h>

int angulos_triangulo(int a1, int a2);

int main (void){
    
    int angulo_1 = 0;
    int angulo_2 = 0;
    int resultado = 0;
    
    printf ("Digite os angulos:\n");
    scanf ("%d %d", &angulo_1, &angulo_2);

    resultado = angulos_triangulo(angulo_1, angulo_2);

    printf("Terceiro angulo: %d\n", resultado);

    return 0;
}

int angulos_triangulo(int a1, int a2){
    int result = 180 - (a1 + a2);
    return result;
}