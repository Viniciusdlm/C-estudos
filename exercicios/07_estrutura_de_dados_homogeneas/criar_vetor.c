#include <stdio.h>
int main(){
    int idade = 15;
    int idades[90] = {15,20,60,14,11,58,90,405};
    // Cada elemento de um vetor char guarda um unico caractere.
    char letras[30] = {'g','h','n','k','o','4','j'};
    float notas[18] = {3.3f, 5.21f, 3.31f, 41.01f, 543.43f};

    printf("Idade: %d\n", idade);
    printf("Primeira idade do vetor: %d\n", idades[0]);
    printf("Letra na posicao 5: %c\n", letras[5]);
    printf("Terceira nota: %.2f\n", notas[2]);
    return 0;
}
