#include <stdio.h>

int main (){

float peso, calculo, altura;

printf("\tCalculo de IMC\n");
printf("\tDigite seu peso: \n");
scanf("%f", &peso);
printf("\tDigite sua altura: \n");
scanf("%f", &altura);

altura = altura * altura;
calculo = peso / altura;

printf("\tO seu imc é de: %.2f\n", calculo);

if (calculo < 18.5){
    printf("Voce esta com magreza / abaixo do peso\n");
}
else if(calculo >= 18.5 && calculo <= 24.9){
    printf("Voce esta no peso normal\n");
}
else if(calculo >= 25.0 && calculo <= 29.9){
    printf("Voce esta em sobrepeso\n");
}
else if (calculo >= 30.0 && calculo <= 34.9){
    printf("Voce esta em obesidade grau I\n");
}
else if(calculo >=35 && calculo <= 39.9){
    printf("Voce esta em obesidade grau II\n");
}
else if(calculo >= 40.0){
    printf("Voce esta em obesidade grau III\n");
}


return 0;
}