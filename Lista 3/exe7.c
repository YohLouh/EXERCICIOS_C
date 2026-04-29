// Leia 6 números e mostre os maiores que 10
#include <stdio.h>

void main(){

    int num[6];
    printf("Digite 6 numeros: ");
    for(int i = 0; i < 6; i++){
        scanf("%d", &num[i]);
    }
    
    printf("Os numeros maiores de dez sao: ");
    for(int i = 0; i < 6; i++){
        if (num[i] > 10){
            printf("%d ", num[i]);
        }
    }
}
