#include <stdio.h>

int main(){
//Exercicio para calcular 3 valores e verificar se formam um triangulo
int valora, valorb, valorc;

printf("Digite os 3 valores inteiros: \n");
scanf("%d%d%d", &valora, &valorb, &valorc);

if(valora + valorb > valorc && valora + valorc > valorb && valorb + valorc > valora){
	printf("Formam um triangulo\n");
}
else{
	printf("Nao formam um triangulo\n");
}

return 0;
}
