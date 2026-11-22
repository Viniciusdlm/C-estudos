#include <stdio.h>

int main()
{
    int opcao;
    float valor, resultado;

    printf("Programa para conversao de real para dolar ou vice-versa\n\n");
    printf("Escolha a opcao de conversao:\n");
    printf("1 - Real para Dolar\n");
    printf("2 - Dolar para Real\n");
    printf("Opcao: ");
    scanf("%d", &opcao);

    printf("Digite o valor a ser convertido: ");
    scanf("%f", &valor);

    if (opcao == 1)
    {
        resultado = valor / 5.12;
        printf("\nR$ %.2f equivalem a US$ %.2f\n", valor, resultado);
    }
    else if (opcao == 2)
    {
        resultado = valor * 5.12;
        printf("\nUS$ %.2f equivalem a R$ %.2f\n", valor, resultado);
    }
    else
    {
        printf("\nOpcao invalida!\n");
    }

    return 0;
}