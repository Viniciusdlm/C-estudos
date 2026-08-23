#include <stdio.h>

int main()
{

    int idade;                                           // guardando uma variavel
    printf("\n\n--------DIGITE A SUA IDADE-------\n\n"); // peço para digitarem a idade
    scanf("%d", &idade);                                 // espero o retorno do teclado referente a idade
    printf("\n\tIdade: %d\n", idade);                    // mostro a idade na tela usando o scanf

    int num1, num2;                                      // guardando variavel 
    printf("\nDigite dois valores inteiros:\n");         // peco para digitar os dois valores
    scanf("%d", &num1);                                  // le o valor1
    scanf("%d", &num2);                                 // le o valor2
    printf("\n\tSoma: %d\n", num1 + num2);              // realiza a leitura e soma dos dois valores




}