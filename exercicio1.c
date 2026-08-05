#include <stdio.h>
#include <locale.h>
int main()
{
    etlocale(LC_ALL, "Portuguese");
    printf("Meu primeiro codigo em C!\n");
    return 0;
}