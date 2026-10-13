#include <stdio.h>

int main(){
int x;

printf("Digite um numero entre 1 e 99: \n");
scanf("%d", &x);

while(x < 1 || x > 99){
    printf("Valor invalido! Por favor digite um numero entre 1 e 99 novamente: \n");
    scanf("%d", &x);
}

printf("Valor digitado: %d\n", x);


return 0;
}