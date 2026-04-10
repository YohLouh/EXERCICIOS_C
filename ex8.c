// Leia uma palavra e mostre as letras em linhas separadas
#include <stdio.h>
#include <string.h>

void main(){

    char palavra[30];
    printf("Insira uma palavra: ");
    scanf("%s", &palavra);

    for(int i = 0; i < strlen(palavra); i++){
        printf("%c\n", palavra[i]);
    }

}