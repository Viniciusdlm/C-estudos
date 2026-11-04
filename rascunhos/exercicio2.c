#include <stdio.h>
int main(){
    float valorconta, gorjeta, valorgorjeta, valordividido, valorfinal;
    int pessoas;

    printf("Qual o valor da conta: \n");
    scanf("%f", &valorconta);
    printf("Qual a porcentagem da gorjeta?:\n ");
    scanf("%f", &gorjeta);
    valorgorjeta = valorconta * (gorjeta / 100);
    valorfinal = valorconta + valorgorjeta;
    printf("A conta será divida em quantas pessoas?: \n");
    scanf("%d", &pessoas);
    valordividido = valorfinal / pessoas;
    printf("O valor dividido para cada pessoa sera de: %.2f\n", valordividido);


return 0;
}