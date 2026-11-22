#include <stdio.h>
int main(){
int n;
    printf("Digite um numero inteiro: \n");
    scanf("%d", &n);
    if (n % 2 == 0)
    {
        printf("Numero eh divisivel por 2\n");
    }
    else if (n % 3 == 0)
    {
        printf("Numero eh divisivel por 3\n");
    }
    else{
        printf("Não eh divisivel por 2 nem por 3\n");
    }

return 0;
}