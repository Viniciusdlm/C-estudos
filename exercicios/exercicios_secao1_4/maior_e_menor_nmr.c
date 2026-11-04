#include <stdio.h>
int main(){
int valor1, valor2, valor3;
printf("Digite 3 numeros inteiros: \n");
scanf("%d%d%d", &valor1, &valor2, &valor3);
if (valor1 > valor2 && valor1 > valor3)
{
    printf("O valor %d eh o maior valor\n", valor1);
}
else if (valor2 > valor1 && valor2 > valor3)
{
    printf("O valor %d eh o maior valor\n", valor2);
}
else{
    printf("O valor %d eh o maior valor\n", valor3);
}

return 0;
}