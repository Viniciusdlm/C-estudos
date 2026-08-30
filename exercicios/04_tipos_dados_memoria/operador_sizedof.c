#include <stdio.h>
#include <stdlib.h>

int main()
{
    // Descobrir o tamanho em memoria de cada tipo de dado com o sizeof
    // Para saber o tamanho do tipo usamos o getchar(tipo)
    // Para saber o tamanho da variavel usamos o getchar x -> variavel

    int a;
    char b;
    float c;

    printf("\n\tinteiro = %d\n", sizeof(int));
    printf("\n\tcaractere = %d\n", sizeof(char));
    printf("\n\tfloat = %d\n", sizeof(float));
    printf("\n\tdouble = %d\n", sizeof(double));

    printf("\n\tinteiro = %d\n", sizeof a);
    printf("\n\tcaractere = %d\n", sizeof b);
    printf("\n\tfloat = %d\n", sizeof c);
}