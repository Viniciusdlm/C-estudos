#include <stdio.h>

int main(){

int a,b,c;

printf("Encontrar o maior e o menor numero entre 3 numeros inteiros\n");
printf("Por favor digite 3 numeros inteiros\n");
scanf("%d%d%d", &a,&b,&c);

if (a>=b && a>=c){
	printf("O numero: %d eh o maior entre os 3\n", a);
}
else if (b>=a && b>=c){
	printf("O numero: %d eh o maior entre os 3\n", b);
}
else {
	printf("O maior numero eh: %d\n", c);
}

if (a<=b && a<=c){
	printf("O numero: %d eh o menor numero entre os 3\n", a);
}
else if(b<=a && b<=c){
	printf("O numero: %d eh o menor numero entre os 3\n", b);
}
else {
	printf("O menor numero eh: %d\n", c);
}

return 0;

}
