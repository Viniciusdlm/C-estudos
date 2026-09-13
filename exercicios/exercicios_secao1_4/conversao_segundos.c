#include <stdio.h>
#include <stdlib.h>

int main()
{

    float segundos, minutos, horas;

    printf("\n\tConversor de segundos em minutos e horas\n\t");
    printf("\n\tDigite a quantidade de segundos a ser convertido: ");
    scanf("%f", &segundos);

    minutos = segundos / 60.0;
    horas = minutos / 60.00;

    printf("\n\tO valor de segundos digitado foi: %.2f segundos\n\tA quantidade de minutos é: %.2f minutos\n\tE a quantidade de horas é: %.2f horas\n\t", segundos, minutos, horas);

    return 0;
}