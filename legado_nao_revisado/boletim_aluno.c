#include <stdio.h>

int main(void)
{
    char nome[50];
    char materia[30];
    float nota1;
    float nota2;
    float nota3;
    float nota4;
    float media;

    printf("Digite o nome do aluno: ");
    scanf(" %49[^\n]", nome);

    printf("Digite a materia: ");
    scanf(" %29[^\n]", materia);

    printf("Digite a primeira nota: ");
    scanf("%f", &nota1);

    printf("Digite a segunda nota: ");
    scanf("%f", &nota2);

    printf("Digite a terceira nota: ");
    scanf("%f", &nota3);

    printf("Digite a quarta nota: ");
    scanf("%f", &nota4);

    media = (nota1 + nota2 + nota3 + nota4) / 4.0f;

    printf("\n========== BOLETIM ==========\n");
    printf("Aluno   : %s\n", nome);
    printf("Materia : %s\n", materia);
    printf("Nota 1  : %.2f\n", nota1);
    printf("Nota 2  : %.2f\n", nota2);
    printf("Nota 3  : %.2f\n", nota3);
    printf("Nota 4  : %.2f\n", nota4);
    printf("Media   : %.2f\n", media);

    if (media >= 7.0f)
    {
        printf("Situacao: APROVADO!\n");
    }
    else
    {
        printf("Situacao: REPROVADO!\n");
    }

    return 0;
}
