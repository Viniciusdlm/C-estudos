#include <stdio.h>
int main(){
char nome[50];
fgets(nome, 50, stdin);
printf("%s", nome);

return 0;
}