// Usar laço para mostrar o alfabeto inteiro

#include <stdio.h>
#include <string.h>

void main(){
    char letra;
    printf("Alfabeto:\n");

    for(letra = 'A'; letra <= 'Z'; letra++){
        printf("%c - ", letra);
    }
}
