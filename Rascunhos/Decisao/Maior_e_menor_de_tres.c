#include <stdio.h>
int main(){
    int a, b, c;
    printf("Digite tres numeros inteiros: ");
    scanf("%d%d%d", &a, &b, &c);

    if( a > b && a > c){
        printf("O valor: %d é maior\n", a);
    } else if ( b > c && b > a)
    {
        printf("O valor: %d é maior\n", b);
    }
    else{
        printf("O valor: %d é maior\n", c);
    }

    if( a < b && a < c){
        printf("O valor: %d é menor\n", a);
    } else if ( b < c && b < a)
    {
        printf("O valor: %d é menor\n", b);
    }
    else{
        printf("O valor: %d é menor\n", c);
    }
}