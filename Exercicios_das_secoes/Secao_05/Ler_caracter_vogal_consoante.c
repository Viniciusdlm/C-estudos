#include <stdio.h>

int main(){

char vogal;

printf("Verificador de vogal ou consoante\n");
printf("Digite o caracter: ");
scanf(" %c", &vogal);

if(vogal == 'a' || vogal == 'e' || vogal == 'i' || vogal == 'o' || vogal == 'u' ){
    printf("O caracter digitado é uma vogal");
}
else{
    printf("O caracter digitado é uma consoante");
}




return 0;
}