// Leia 6 números e mostre o maior e o menor
#include <stdio.h>

void main(){

    int maior = 0;
    int menor = 1000;
    int num[6];
    printf("Digite 6 numeros: ");
    for(int i = 0; i < 6; i++){
        scanf("%d", &num[i]);
        if (num[i] >= maior){
            maior = num[i];
        }
        if (num[i] <= menor){
            menor = num[i];
        }
    }

    printf("O maior numero eh: %d\n", maior);
    printf("O menor numero eh: %d", menor);

}