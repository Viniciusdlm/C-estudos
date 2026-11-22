#include <stdlib.h>
#include <stdio.h>

int main(){

    float real, dolar ;

        printf("\n\tCONVERSOR DE REAIS EM DOLARES\n\t");
        printf("\n\tDigite o valor em real a ser convertido em dolar: \n\t"); 
        scanf("%f", &real);
        
        dolar = real / 5.30f;

        printf("\n\tO valor convertido é de: %.2f\n\t" , dolar);

return 0;

}