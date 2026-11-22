#include <stdio.h>

int main(void){

int nota;
printf("Digite a sua nota: ");
scanf("%d", &nota);
if (nota >= 9)
{
    printf("Destaque\n");
}
else if(nota >= 6 && nota <9 ){
    printf("Aprovado\n");
}
else{
    printf("Reprovado");
}

return 0;
}