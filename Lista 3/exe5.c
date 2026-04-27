// Leia 5 números e conte quantos são positivos
#include <stdio.h>

void main(){

    int positivos = 0;
    int num[5];
    printf("Digite 5 numeros: ");
    for(int i = 0; i < 5; i++){
        scanf("%d", &num[i]);
    }

    for(int i = 0; i < 5; i++){
        if (num[i] > positivos){
            positivos++;
        }
    }
    
    if(positivos == 1){
        printf("%d numero eh positivo.", positivos);
    } else {
        printf("%d numeros sao positivos.", positivos);
    }
    

}