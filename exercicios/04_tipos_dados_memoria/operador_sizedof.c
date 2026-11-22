#include <stdio.h>
#include <stdlib.h>

int main()
{
    // Descobrir o tamanho em memoria de cada tipo de dado com o sizeof
    // Para saber o tamanho do tipo usamos sizeof(tipo).
    // Para saber o tamanho da variavel usamos sizeof variavel.
    // sizeof retorna size_t, impresso com %zu.

    int a;
    char b;
    float c;

    printf("\n\tinteiro = %zu\n", sizeof(int));
    printf("\n\tcaractere = %zu\n", sizeof(char));
    printf("\n\tfloat = %zu\n", sizeof(float));
    printf("\n\tdouble = %zu\n", sizeof(double));

    printf("\n\tinteiro = %zu\n", sizeof a);
    printf("\n\tcaractere = %zu\n", sizeof b);
    printf("\n\tfloat = %zu\n", sizeof c);
}
