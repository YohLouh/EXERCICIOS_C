// Função que calcule o IMC e diga sua classificação na tabela
#include <stdio.h>

float IMC (float peso, float altura){
    float IMC;
    IMC = peso/(altura*altura);
    return IMC;
}

void main(){
    float peso;
    float altura;
    scanf("%f %f", &peso, &altura);


    if(IMC(peso, altura) < 18.5){
        printf("Abaixo do peso.");

    } else if ((IMC(peso, altura) >= 18.6) && (IMC(peso,altura) < 24.9)){
        printf("Peso ideal!");

    } else if ((IMC(peso, altura) >= 25.0) && (IMC(peso,altura) < 29.9)){
        printf("Levemente acima do peso.");

    } else if ((IMC(peso, altura) >= 30.0) && (IMC(peso,altura) < 34.9)){
        printf("Obesidade - grau I.");

    } else if ((IMC(peso, altura) >= 35.0) && (IMC(peso,altura) < 39.9)){
        printf("Obesidade - grau II (severa).");

    } else {
        printf("Obesidade - grau III (morbida).");
    }
}