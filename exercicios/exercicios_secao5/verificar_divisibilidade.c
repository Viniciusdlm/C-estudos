#include <stdio.h>

int main(){

int num;

printf("Programa para informar divisibilidade por 2, 3 e 5\n");
printf("Digite um numero: \n");
scanf("%d", &num);

if (num %2 == 0){
	printf("Numero divisivel por 2\n");
}
if (num %3 == 0){
	printf("Numero divisivel por 3\n");
}
if (num %5 == 0){
	printf("Numero divisivel por 5\n");
}
if(num % 2 !=0 && num %3 !=0 && num %5 !=0){
	printf("O numero nao eh divisivel por 2, 3 e 5\n");
}

return 0;

}
