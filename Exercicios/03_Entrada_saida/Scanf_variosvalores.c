#include <stdio.h>

int main(){

    char sexo;
    int idade;
    float peso, altura;

    printf("\n\tDigite f para feminino ou m para masculino, digite também a sua idade, peso e altura: ");
    scanf("%c%d%f%f", &sexo, &idade, &peso, &altura);
    printf("\n\tSexo: %c\n\tIdade: %d\n\tPeso: %f\n\tAltura: %f\n", sexo, idade, peso, altura);
    


}
    