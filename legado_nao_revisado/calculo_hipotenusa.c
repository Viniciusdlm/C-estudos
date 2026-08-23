#include <math.h>
#include <stdio.h>

int main(void)
{
    int cateto1;
    int cateto2;
    int soma_dos_quadrados;
    float hipotenusa;

    printf("Digite o valor do primeiro cateto: ");
    scanf("%d", &cateto1);

    printf("Digite o valor do segundo cateto: ");
    scanf("%d", &cateto2);

    if (cateto1 > 0 && cateto2 > 0)
    {
        soma_dos_quadrados = cateto1 * cateto1 + cateto2 * cateto2;
        hipotenusa = sqrt(soma_dos_quadrados);

        printf("A hipotenusa e %.2f\n", hipotenusa);
    }
    else
    {
        printf("Erro! Os catetos devem ser maiores que zero.\n");
    }

    return 0;
}
