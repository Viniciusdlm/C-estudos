#include <stdio.h>
int main(){
int i, contar = 0;
char palavra[50];
fgets(palavra, 50, stdin);
for (i = 0; palavra[i] != '\0' && palavra[i] != '\n'; i++) {
    if (palavra[i] == 'a') {
        contar++;
    }
}

printf("Quantidade de letras a: %d\n", contar);





return 0;
}