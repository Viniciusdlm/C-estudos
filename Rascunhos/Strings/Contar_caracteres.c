#include <stdio.h>
int main(){
int i, contar = 0;
char nome[50];
fgets(nome, 50, stdin);
for ( i = 0; nome[i] != '\0' && nome[i] != '\n' ; i++){
contar++;
}
printf("A contagem de caracteres eh de: %d", contar);
printf("Nome: %s", nome);
return 0;
}