#include <stdio.h>

int main(){
	//Aula de decisao aninhada
int x = 0;

if(x > 0){
	printf("\tPositivo\n");
	if(x <100){
		printf("Valor entre 1 e 99\n");
	}
	else{
		printf("Valor maior ou igual a 100\n");
	}
}

else{
	if(x == 0){
		printf("\tValor eh zero\n");
	}
	else{
		printf("\tValor eh negativo\n");
}

return 0;
}
