#include <stdio.h>
int main(){
    int idade = 15;
    if (idade >= 15)
    {
        int anos = idade - 15;
        printf("Há %d a pessoa é maior de idade", anos);
    }
    printf("Idade %d", idade);
    return 0;
}