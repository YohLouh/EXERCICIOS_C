// Receba dois números e diga qual é o maior
#include <stdio.h>

void main(){
    int numero1;
    int numero2;
    printf("Digite dois numeros inteiros: ");
    scanf("%d  %d", &numero1, &numero2);

    if(numero1 == numero2){
        printf("Os numeros sao iguais.");
    } else if (numero1 > numero2){
        printf("O numero %d eh maior que %d.", numero1, numero2);
    } else {
        printf("O numero %d eh maior que %d.", numero2, numero1);
    }
}