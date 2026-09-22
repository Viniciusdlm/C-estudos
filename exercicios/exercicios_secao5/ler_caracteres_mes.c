#include <stdio.h>

int main(){

int mes = 1;

printf("\tDigite um numero equivalente ao mes que deseja: ");
scanf("%d", &mes);

switch (mes){
case 1:
    printf("\tJaneiro\n");
    break;
case 2:
    printf("\tFevereiro\n");
    break;
case 3:
    printf("\tMarco\n");
    break;
case 4:
    printf("\tAbril\n");
    break;
case 5:
    printf("\tMaio\n");
    break;
case 6:
    printf("\tJunho\n");
    break;
case 7: 
    printf("\tJulho\n");
    break;
case 8:
    printf("\tAgosto\n");
    break;
case 9:
    printf("\tSetembro\n");
    break;
case 10:
    printf("\tOutubro\n");
    break;
case 11:
    printf("\tNovembro\n");
    break;
case 12:
    printf("\tDezembro\n");
    break;

default:
    printf("Valor inesperado○\n");
    break;
}


return 0;
}