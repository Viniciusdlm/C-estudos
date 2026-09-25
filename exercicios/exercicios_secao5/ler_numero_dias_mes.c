#include <stdio.h>

int main()
{

    int mes = 1;

    printf("Digite um numero do mes, que direi quantos dias tem esse mes: \n");
    scanf("%d", &mes);

    switch (mes)
    {

        //Mes com 28 dias
    case 2:
        printf("Este mes tem 28 dias\n");
        break;

        // Meses com 30 dias
    case 4:
    case 6:
    case 9:
    case 11:
        printf("Este mes tem 30 dias\n");
        break;

        //Meses com 31 dias
    case 1:
    case 3:
    case 5:
    case 7:
    case 8:
    case 10:
    case 12:
        printf("Este mes tem 31 dias\n");
        break;

    default:
        break;
    }

    return 0;
}