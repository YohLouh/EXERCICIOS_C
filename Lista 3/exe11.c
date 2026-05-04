// Leia 5 números e some os pares e os ímpares
#include <stdio.h>

void main(){

    int num[5];
    printf("Digite 5 numeros: ");
    for(int i = 0; i < 5; i++){
        scanf("%d", &num[i]);
    }

    for(int i = 0; i < 5; i++){
        if(num[i] % 2 == 0){
            printf("A soma dos numeros pares eh: %d\n", num[i]);
        } else {
            printf("A soma dos numeros impares eh: %d\n", num[i] + num[i]);
        }
    }

}