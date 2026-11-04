#include <stdio.h>
int main(){
int numeros, maior, menor, i;
for ( i = 0; i < 3; i++)
{
    printf("Digite os 3 numeros inteiros: %d ", i+1);
    scanf("%d", &numeros);
    if (i == 0)
    {
        maior = numeros;
        menor = numeros;
    }
    else {
        if (numeros > maior)
        {
            maior = numeros;
        }
        if (numeros < menor)
        {
            menor = numeros;
        }
        
    }
    
}
    printf("Maior: %d\n", maior);
    printf("Menor: %d\n", menor);
}