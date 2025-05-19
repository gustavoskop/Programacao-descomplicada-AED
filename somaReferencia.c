// ponteiros ex. 7

#include <stdio.h>

void soma(int* a, int b);

int main(){
    int a = 10, b = 10;

    soma(&a, b);
    printf("%d", a);
}

void soma(int *a, int b){

    *a = *a + b;
}
