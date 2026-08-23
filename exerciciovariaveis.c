#include <stdio.h>

int main()
{
    // %d serve para um numero decimal - inteiro

    /*
    1 ° Passo = Usar tabulação \n e \t para nao juntar os codigos
    2 ° Passo = Usar sempre o gcc exerciciotal.c -o exerciciotal.exe vai recompilar
    3 ° Passo = Usar o .\exerciciotal.exe para executar o codigo no terminal
    4 ° Passo = Fazer o git add a cada alteração relevante
    */

    printf("\n\t%d + %d = %d\n", 12, 18, 12 + 18); // só dara certo se recompilar sempre que alterar o codigo, esse codigo é para somas.

    printf("\n\t%d - %d = %d\n", 15, 10, 15 - 10); // código para subtrair os numeros.

    printf("\n\t%d * %d = %d\n", 15, 10, 15*10); // código para multiplicar os numeros.

    return 0;
}