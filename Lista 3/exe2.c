// Leia 5 números e mostre os pares
#include <stdio.h>

void main(){

    int num[5]; 
    printf("Digite 5 numeros: ");
    for(int i = 0; i < 5; i++){
        scanf("%d", &num[i]);
    }
    
    for(int i = 0; i < 5; i++){
        if (num[i] % 2 == 0){
            printf("%d", num[i]);
        }
    }
}