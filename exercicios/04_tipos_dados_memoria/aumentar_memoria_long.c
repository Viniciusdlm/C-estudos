#include <stdio.h>
#include <stdlib.h>

int main(){

   long long int valor;
   long long int a, b, c;

    a = 2147483647;
    b = 1;
    c = a + b;

    printf("\n\ta= %lld\n\tb = %lld\n\tc = %lld\n\n\n", a, b, c);

    printf("\n\tTamanho: %d\n", sizeof valor);


}