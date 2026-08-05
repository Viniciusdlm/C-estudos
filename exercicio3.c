#include <stdio.h> //coloquei as bibliotecas
#include <math.h>

int main() // iniciei o programa
{
    int cateto1; // declaro as variaveis
    int cateto2;
    int resultado1;
    float hipotenusa;

    printf("Digite o valor do cateto1: ");
    scanf("%d", &cateto1);

    printf("Digite o valor do cateto2: ");
    scanf("%d", &cateto2);

    if (cateto1 > 0 && cateto2 > 0) // condições
    {
        resultado1 = cateto1 * cateto1 + cateto2 * cateto2;
        hipotenusa = sqrt(resultado1);

        printf("A hipotenusa e %.2f\n", hipotenusa);
    }
    else
    {
        printf("Erro! Os catetos devem ser maiores que zero.\n");
    }

    return 0;
}