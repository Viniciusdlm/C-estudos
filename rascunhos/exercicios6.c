#include <stdio.h>
int main(){
int i, n;
printf("Digite um numero inteiro: \n");
scanf("%d", &n);
for ( i = 0; i < 11; i++)
{
    printf("%d x %d = %d\n", n, i, n*i);
}
return 0;
}