// Receba três números e diga qual é o maior
#include <stdio.h>

void main(){
    int numero1;
    int numero2;
    int numero3;
    printf("Digite tres numeros inteiros: ");
    scanf("%d  %d  %d", &numero1, &numero2, &numero3);


    if((numero1 == numero2) && (numero2 == numero3)){
        printf("Os numeros sao iguais.");
    } else if ((numero1 > numero2) && (numero1 > numero3)){
        printf("%d eh o maior numero dos tres.", numero1);
    } else if ((numero2 > numero1) && (numero2 > numero3)){
        printf("%d eh o maior numero dos tres.", numero2);
    } else {
        printf("%d eh o maior numero dos tres.", numero3);
    }
}