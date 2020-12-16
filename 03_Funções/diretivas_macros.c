#include<stdio.h>

#define PI 3.1416F
#define MAX(a, b) ((a) > (b) ? (a) : (b))
#define SOMA(a, b) ((a) + (b))

int main(){

//  printf("%.4f\n", PI + 10);
//  printf("%.4f\n", 3.1416F + 10);

//  printf("%d\n", MAX(20, 15));
//  printf("%d\n", ((20) > (15) ? (20) : (15)));

    printf("%d\n", 5 * SOMA(2, 3));
//  printf("%d\n", 5 * (2 + 3));
    
    return 0;
}