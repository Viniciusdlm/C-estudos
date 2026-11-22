#include <stdio.h>
int main(){

int dias;
float desconto, salario, valorliquido;
printf("Digite os seus dias trabalhados: ");
scanf("%d", &dias);
salario = dias*45.00;
desconto = 0.92;
valorliquido = (salario * desconto);
printf("O salario com desconto é de: %.2f", valorliquido);
return 0;
}