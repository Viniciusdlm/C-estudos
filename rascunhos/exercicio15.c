#include <stdio.h>
int main(){
char palavra[50];
int i, contar =0, contarespaco=0;
fgets(palavra, 50, stdin);
for( i=0 ; palavra[i] != '\0' && palavra[i] != '\n'; i++  ){
    if (palavra[i] == 'a' || palavra[i] == 'A')
    {
        contar++;
    }
}
    if (palavra[i] == ' ')
    {
        contarespaco++;
    }
    
printf("A contagem de letras a minusculas e maiusculas sao de: %d\n", contar);
printf("A contagem de espacos sao de: %d\n", contarespaco);



return 0;
}