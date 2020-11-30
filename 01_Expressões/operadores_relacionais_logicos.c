#include<stdio.h>

int main(){

    int a = 2, b = 4, c = 6;

    // Exemplos de aplicação dos operadores relacionais
    printf("a < b = %d\n", a < b);
    printf("a > b = %d\n", a > b);
    printf("a == 2 = %d\n", a == 2);

    // Exemplos de aplicação dos operadores lógicos
    printf("(a <= b) AND (a <= c) = %d\n", a <= b && a <= c);
    printf("(a <= b) AND (a == c) = %d\n", a <= b && a == c);
    printf("((a <= b) AND (a <= c)) AND (b <= c) = %d\n", (a <= b && a <= c) && b <= c);

    printf("(a == b) OR (a < c) = %d\n", a == b || a < c);
    printf("(a == b) OR (a == c) = %d\n", a == b || a == c);

    return 0;
}