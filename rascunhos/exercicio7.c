#include <stdio.h>
int main(){
int i, soma = 0 , n;
printf("Digite um numero inteiro: ");
scanf("%d", &n);
for (i = 1; i <= n; i++)
{
   soma = soma + i;
}
printf("A soma eh: %d\n", soma);
return 0;
}