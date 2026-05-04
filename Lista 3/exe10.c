// Leia 5 números e crie outro vetor com 1 para par e 0 para ímpar
#include <stdio.h>

void main(){

    int num[5];
    int vetor[2] = {0, 1};
    printf("Digite 5 numeros: ");
    for(int i = 0; i < 5; i++){
        scanf("%d", &num[i]);
    }

    for(int i = 0; i < 5; i++){
        if(num[i] % 2 == 0){
            printf("(%d) Par: %d\n", num[i], vetor[2]);
        } else {
            printf("(%d) Impar: %d\n", num[i], vetor[1]);
        }
    }

}