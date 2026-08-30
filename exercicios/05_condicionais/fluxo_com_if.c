#include <stdio.h>

int main() {

    int chute;
    int numerosecreto = 42;

    printf("Qual o seu chute? ");
    scanf("%d", &chute);

    int acertou = chute == numerosecreto;

    if(acertou)
    {
        printf("Parabens voce acertou!\n");
    }
    else
    {
        int maior = chute > numerosecreto;
        if (maior)
        {
            printf("Seu chute foi maior do que o numero secreto!\n");
        }
     
      else {
            printf("Seu chute foi menor do que o numero secreto!\n");
                }

        }
        
    return 0;
}