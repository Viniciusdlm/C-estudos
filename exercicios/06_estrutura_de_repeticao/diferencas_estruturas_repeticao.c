#include <stdio.h>

int main(void) {
    int i;

    // O for agrupa a inicializacao, a condicao e o incremento.
    for (i = 0; i < 3; i++) {
        printf("for: %d\n", i);
    }

    // O while verifica a condicao antes de executar cada repeticao.
    i = 0;
    while (i < 3) {
        printf("while: %d\n", i);
        i++;
    }

    // Mesmo com i igual a 3, o do while executa o corpo uma vez.
    do {
        printf("do while: %d\n", i);
        i++;
    } while (i < 3);

    return 0;
}
