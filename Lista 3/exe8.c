// Leia 5 números e mostre se 50 está presente
#include <stdio.h>

void main(){

    int num[5];
    int buscar = 50;
    int indice = -1;

    printf("Digite 5 numeros: ");
    for(int i = 0; i < 5; i++){
        scanf("%d", &num[i]);
    }

    for(int i = 0; i < 5; i++){
        if(buscar == num[i]){
            indice = i;
        }
    }

    if (indice > -1){
        printf("Numero '50' achado no indice %d", indice);
    } else {
        printf("Nao ha numeros '50'");
    }

    
}