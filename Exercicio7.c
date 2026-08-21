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
        printf("Acertou!\n");
    } else {
        printf("Errou!\n");
    }

    return 0;
}