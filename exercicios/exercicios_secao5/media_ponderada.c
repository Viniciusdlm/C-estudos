#include <stdio.h>

int main(){
float  valora, valorb, peso1, peso2, multi, soma, divisao  ;

printf("Digite a sua primeira nota: \n");
scanf("%f", &valora);
printf("Qual o peso dessa nota?\n");
scanf("%f", &peso1);
printf("Digite a sua segunda nota: \n");
scanf("%f", &valorb);
printf("Qual o peso dessa nota?\n");
scanf("%f", &peso2);

multi = valora * peso1 + valorb * peso2;
soma = peso1 + peso2;
divisao = multi / soma;

printf("A sua media ponderada eh: %2.f\n", divisao);

return 0;
}
