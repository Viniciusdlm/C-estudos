#include <stdio.h>

void diminuir(int *p){
*p = *p - 3;
}

int main(void){
    int numero = 10;

    diminuir(&numero);
    printf("O valor diminuido em -3 eh %d\n", numero);


    return 0;
}