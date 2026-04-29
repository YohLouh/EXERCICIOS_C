// Leia 5 números e substitua os negativos por 0
#include <stdio.h>

void main(){

    int num[5];
    printf("Digite 5 numeros: ");
    for(int i = 0; i < 5; i++){
        scanf("%d", &num[i]);
    }

    for(int i = 0; i < 5; i++){
        if(num[i] < 0){
            num[i] = 0;
        }
        printf("%d", num[i]);
    }

}