#include <stdio.h>
#include <stdlib.h>

int main(){

char sexo;
int idade;
float peso, altura;

printf("\tDigite seu sexo ( f ou m ), idade, peso e altura: ");
scanf("%c%d%f%f", &sexo, &idade, &peso, &altura);
printf("\n\tSeu sexo é: %c\n\tSua idade é: %d\n\tSeu peso é: %f\n\tSua altura é: %f\n\t", sexo, idade, peso, altura);
}
