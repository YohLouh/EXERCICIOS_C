// Leia 5 números e mostre invertido
#include <stdio.h>

void main(){

    int num[5];
    printf("Digite 5 numeros: ");
    for(int i = 0; i < 5; i++){
        scanf("%d", &num[i]);
    }

    for(int i = 0; i < 5; i++){
        printf("%d", &num[i]);
    }
    
}