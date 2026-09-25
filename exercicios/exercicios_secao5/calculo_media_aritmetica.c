#include <stdio.h>

int main(){

float nota1, nota2, nota3, soma, media ;

printf("Calculo de média aritmética\n");
printf("Digite os valores das suas notas: \n");
scanf("%f%f%f", &nota1, &nota2, &nota3);

soma = nota1 + nota2 + nota3;
media = soma / 3;

printf("A média aritmética é: %2.f\n", media);
return 0;
}