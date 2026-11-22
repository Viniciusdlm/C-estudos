#include <stdio.h>
int main(){ 

void_dobrar(int *p){
    *P = numero * 2;
}

void_aumentar( int *p){
    *p = numero + 5;
}

int main(void){
    int numero = 7;

    dobrar(&numero);

    aumentar(&numero);
    printf("O valor dobrado eh %d\n", numero);
    printf("O valor aumentado +5 eh %d\n", aumentar);
}
}