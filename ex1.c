// Leia uma letra e mostre ela 10x

#include <stdio.h>
#include <string.h>

void main(){

    char letra;
    int i;
    printf("Insira uma letra: ");
    scanf("%c", &letra);

    for (i = 0; i < 11; i++){
        printf("%c\n", letra);
    }


}