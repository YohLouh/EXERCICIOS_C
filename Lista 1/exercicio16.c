// Menu que faz cálculo de IMC, média, e diz se um número é par conforme o case
#include <stdio.h>

float media (float nota1, float nota2){
    float media;
    media = (nota1 + nota2)/2;
    printf("Media: %.2f\n", media);
    if(media < 0){
        printf("Notas invalidas.");
   } else if (media >= 7){
        printf("Aprovado!");
   } else if ((media >= 5) && (media < 7)){
        printf("Recuperacao.");
   } else {
        printf("Reprovado.");
   }
   return media;
}
float IMC (float peso, float altura){
    float IMC;
    IMC = peso/(altura*altura);
    printf("IMC = %.2f", IMC);
    if(IMC < 18.5){
        printf("\nAbaixo do peso.");

    } else if ((IMC >= 18.6) && (IMC < 24.9)){
        printf("\nPeso ideal!");

    } else if ((IMC >= 25.0) && (IMC < 29.9)){
        printf("\nLevemente acima do peso.");

    } else if ((IMC >= 30.0) && (IMC < 34.9)){
        printf("\nObesidade - grau I.");

    } else if (IMC >= 35.0 && IMC < 39.9){
        printf("\nObesidade - grau II (severa).");

    } else {
        printf("\nObesidade - grau III (morbida).");
    }
    return IMC;
}
int ehPar(int num){
    int ehPar;
    if (num % 2 == 0){
        ehPar = 0;
    } else {
        ehPar = 1;
    }
    printf("%d", ehPar);
    return ehPar;
}

void main(){
    printf("--- 1 - Media simples ----------------\n--- 2 - Calculo IMC ------------------\n--- 3 - Identificacao de par/impar ---\n");
    int opcao;
    scanf("%d", &opcao);
    float nota1, nota2;
    float peso, altura;
    int num;

    
    switch(opcao){
        case 1:
            printf("Insira duas notas: ");
            scanf("%f %f", &nota1, &nota2);
            media(nota1, nota2);
            break;
        case 2:
            printf("Insira peso e altura: ");
            scanf("%f %f", &peso, &altura);
            IMC(peso, altura);
            break;
        case 3:
            printf("Insira um numero inteiro: ");
            scanf("%d", &num);
            ehPar(num);
            break;
        default:
            printf("Opcao invalida!");
    }
}