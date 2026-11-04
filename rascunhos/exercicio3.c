#include <stdio.h>
int main(){
    int hora, minutos, segundos, segundosdigitado;
    printf("Digite os segundos a serem convertidos: ");
    scanf("%d", &segundosdigitado);
    hora = segundosdigitado / 3600;
    minutos = (segundosdigitado % 3600) / 60;
    segundos = segundosdigitado % 60;

    printf("O horario convertido será de: %d horas, %d minutos, %d segundos\n", hora, minutos, segundos);
return 0;
}