// Leia uma letra minúscula e mostre-a maiúscula

#include <stdio.h>
#include <string.h>

void main(){

    char letra;
    printf("Insira uma letra: ");
    scanf("%c", &letra);

    printf("%c", letra - 32);

}