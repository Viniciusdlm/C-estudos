#include <stdio.h>

void mostrar(void) {
    int numero = 7;
    printf("%d\n", numero);
}

int main(void) {
    mostrar();
    printf("Voltei ao main\n");

    return 0;
}