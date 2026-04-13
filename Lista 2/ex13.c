// Leia duas palavras e informe se são iguais ou diferentes
#include <stdio.h>
#include <string.h>

void main(){

    char palavra1[10], palavra2[10];
    printf("Escreva duas palavras: ");
    scanf("%s %s", &palavra1, &palavra2);

    if(strcmp(palavra1, palavra2) == 0){
        printf("As palavras sao iguais!");
    } else printf("As palavras sao diferentes!");

}