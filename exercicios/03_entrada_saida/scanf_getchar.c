#include <stdio.h>

int main()
{

    char sexo;

    printf("\n\tDigite F para Feminino ou M para Masculino: ");
    sexo = getchar();
    scanf("%c", &sexo);
    printf("\n\tSexo Digitado: %c\n", sexo);
}