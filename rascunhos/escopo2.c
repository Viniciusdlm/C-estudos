#include <stdio.h>
int main(){ 
    int x = 10;

if (x > 5) {
    int x = 3;
    printf("Dentro: %d\n", x);
}

printf("Fora: %d\n", x);
}