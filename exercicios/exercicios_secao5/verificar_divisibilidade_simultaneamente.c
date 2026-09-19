#include <stdio.h>

int main(){

int num;

printf("Programa para verificar divisibilidade simultaneamente entre 2, 3 e 6\n");
printf("Digitar um valor: \n");
scanf("%d", &num);

if (num %2 == 0 && num %3 == 0 && num %6 == 0 ) {
	printf("O numero digitado eh divisivel por 2, 3 e 6\n");
}
else {
	printf("O numero nao eh divisivel por 2, 3 e 6\n")'
}

return 0;

}
