#include <stdio.h>

int main(void)
{
    int numero_secreto = 42;
    int chute;

    printf("***************************************\n");
    printf("* BEM-VINDO AO JOGO DA ADIVINHACAO! *\n");
    printf("***************************************\n");

    printf("Qual e o seu chute? ");
    scanf("%d", &chute);

    printf("Voce chutou o numero %d.\n", chute);

    if (chute == numero_secreto)
    {
        printf("Parabens! Voce acertou!\n");
    }
    else if (chute > numero_secreto)
    {
        printf("Seu chute foi maior que o numero secreto.\n");
    }
    else
    {
        printf("Seu chute foi menor que o numero secreto.\n");
    }

    printf("Obrigado por jogar!\n");

    return 0;
}
