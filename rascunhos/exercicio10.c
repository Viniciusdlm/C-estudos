#include <stdio.h>
int main(){
int soma = 0, i;
int idades[5];
for (i = 0; i < 5 ; i++)
{
    scanf("%d", &idades[i]);
    soma = soma + idades[i];
}
int maior = idades[0];
for ( i = 1; i < 5; i++)
{
    if (idades[i]>maior){
        maior = idades[i];
    }
}

int menor = idades[0];
for  (i = 1; i < 5; i++)
{
    if(idades[i] < menor){
        menor = idades[i];
    }
}

printf("Menor: %d\n", menor);
printf("Maior: %d\n", maior);
printf("Soma: %d\n", soma);

return 0;
}