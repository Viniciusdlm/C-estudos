#include <stdio.h>
int main(){
int senha;
printf("Digite a sua senha: \n");
scanf("%d", &senha);

while (senha != 1234)
{
    printf("Senha incorreta\n");
    printf("Digite a sua senha: \n");
    scanf("%d", &senha);
}
printf("Acesso liberado\n");

return 0;
}