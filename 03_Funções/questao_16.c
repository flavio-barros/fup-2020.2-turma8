#include<stdio.h>

int dentro_ret(int x0, int y0, int x1, int y1, int x, int y);

int main(void){

    printf("%d\n", dentro_ret(1, 1, 5, 3, 6, 2));

    return 0;
}

int dentro_ret(int x0, int y0, int x1, int y1, int x, int y){

    if(x >= x0 && x <= x1 && y >= y0 && y <= y1){
        return 1;
    }else{
        return 0;
    }

}