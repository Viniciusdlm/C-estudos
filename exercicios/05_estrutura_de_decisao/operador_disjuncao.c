#include <stdio.h>
int main(){
//Operador disjuncao so vai ser verdadeiro se um dos resultados forem verdadeiro (1-Verdadeiro || 2-Falso = Verdadeiro)
int a,b,c,d;
a=1;
b=2;
c=30;
d=4;

if(a<b || c<d){
	printf("Verdadeiro\n");
}
else{
	printf("Falso\n");
}


}
