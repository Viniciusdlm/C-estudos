#include <stdio.h>
int main(void){

    int i, num [5];
for(i= 0; i < 5; i++){
    printf("Digite o valor da posicao %d: ", i);
    scanf("%d", &num[i]);
}    

printf("\n\t");
for(i=0; i<5; i++)
printf("%d,", num[i]);

}