#include <stdio.h>

int main() {
    printf("***********************\n");
    printf("* BEM VINDO AO JOGO DA ADIVINHACAO *\n");
    printf("***********************\n");

    int numerosecreto = 42;
    int chute;

    printf("Qual e o seu chute? ");
    scanf("%d", &chute);

    printf("Voce chutou o numero %d\n", chute);

    if (chute == numerosecreto) {
        printf("Parabens! Voce acertou!\n");
    } else if (chute > numerosecreto) {
        printf("Voce errou! Seu chute foi maior que o numero secreto.\n");
    } else {
        printf("Voce errou! Seu chute foi menor que o numero secreto.\n");
    }

    printf("Obrigado por jogar!\n");

    return 0;
}