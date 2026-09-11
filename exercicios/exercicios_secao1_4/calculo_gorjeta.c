#include <stdio.h>
#include <stdlib.h>

int main()
{

    float despesa, gorjeta;
    int numpessoas;

    printf("\n\tDigite o valor da despesa: \n\tDigite o valor da gorjeta: \n\tDigite o numero de pessoas que irao dividir a conta igualmente: \n\t");
    scanf("%f%f%d", &despesa, &gorjeta, &numpessoas);

    despesa = despesa + (despesa * gorjeta / 100);

    printf("\n\tO valor da despesa foi de: %.2f reais\n\tO valor da gorjeta foi de: %.2f reais\n\tO valor a ser pago por cada pessoa é de: %.2f reais\n\t", despesa, gorjeta, despesa / numpessoas);

    return 0;
}