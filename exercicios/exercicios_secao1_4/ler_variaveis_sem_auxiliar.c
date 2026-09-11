#include <stdio.h>
#include <stdlib.h>

int main(){

    int valor1, valor2;
    printf("\n\tDigite dois numeros inteiros: ");
    scanf("%d%d", &valor1, &valor2);

    valor1= valor1+valor2;
    valor2= valor1-valor2;
    valor1= valor1 - valor2;

    printf("\n\tValor 1: %d\n\tValor 2: %d\n\t", valor1, valor2);


return 0;
}