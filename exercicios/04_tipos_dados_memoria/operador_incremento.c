#include <stdio.h>
#include <stdlib.h>
#include <locale.h>


int main(){

     setlocale(LC_ALL, ".UTF-8");

    int y,x = 35;
    y = x++ ;
        printf("\n\tO valor de y será: %d\n\tO valor de x será: %d\n", y,x);



}