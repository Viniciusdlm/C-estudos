#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){

    setlocale(LC_ALL, ".UTF-8");
    int y,x = 35;
    y = x--;

    printf("\n\tO resultado de y será: %d\n\tO resultado de x será: %d\n\t", y,x);

}