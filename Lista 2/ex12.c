// Ler palavra e letra, contar quantas vezes a letra aparece na palavra
#include <stdio.h>
#include <string.h>

void main(){

    char palavra[30];
    char letra;
    int quantLetra = 0;
    printf("Digite uma palavra e uma letra: ");
    scanf("%s %c", &palavra, &letra);

    for(int i = 0; i < strlen(palavra); i++){
        if(palavra[i] == letra){
            quantLetra++;
        }
    }
    printf("\nA letra %c aparece %d vez(es) na palavra", letra, quantLetra);

}