#include <stdio.h>
int main(){
int nmr, soma = 0, nmrpositivo = 0, i;
for (i = 0; i < 5; i++)
{
    printf("Digite os 5 numeros inteiros", i +1);
    scanf("%d", &nmr);
    soma = soma + nmr;
    if (nmr > 0)
    {
        nmrpositivo++;
    }
    
}
printf("A soma dos numeros eh: %d\n", soma);
printf("Os numeros positivos sao: %d\n", nmrpositivo);

return 0;
}