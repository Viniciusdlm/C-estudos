#include <stdio.h>
#include <stdlib.h>

// Ler dois caracteres e limpar o buffer do teclado com um espaço

int main()
{

    char a, b;
    printf("\nDigite dois caracteres: ");
    scanf("%c%c", &a, &b);
    printf("\n\ta=%c \tb=%c\n",a, b);
    printf("\n\ta=%d \tb=%d\n",a, b);
}