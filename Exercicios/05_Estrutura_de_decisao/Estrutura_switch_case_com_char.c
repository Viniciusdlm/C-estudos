#include <stdio.h>
int main(){
//Aula de switch case usando o switch case com caracteres

char opcao = 'a';

switch(opcao){
case 'a':
	printf("Cadastrar cliente\n");
	break;
case 'b':
	printf("Imprimir clientes\n");
	break;
default:
	printf("Valor inesperado\n");
	break;
}


}
