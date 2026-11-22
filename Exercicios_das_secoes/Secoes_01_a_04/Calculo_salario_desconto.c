#include <stdio.h>
#include <stdlib.h>

int main(){

    float salario;
    int dias_trabalhados;

    printf("Digite a quantidade de dias trabalhados: \n\t");
    scanf("%d", &dias_trabalhados);

    salario = 45 * dias_trabalhados;
    salario = salario - salario * 0.08;

    printf("O seu salario liquido é: %f", salario);


    return 0;
}