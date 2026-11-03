#include <stdio.h>
int main(void){

int numero[5];
int positivos = 0, negativos = 0, zeros = 0;

printf("Digite 5 numeros inteiros: ");
for (int i = 0; i < 5; i++)
{
    scanf("%d", &numero[i]);
}

for (int i = 0; i < 5; i++)
{
    if (numero [i]> 0){
        positivos++;
    }
    else if(numero [i] < 0){
        negativos++;
    }
    else{
        zeros++;
    }
}

    printf("Resultados: \n");
    printf("Positivos: %d\n", positivos);
    printf("Negativos: %d\n", negativos);
    printf("Zeros:%d\n", zeros);
    




return 0;
}