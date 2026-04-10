// Ler palavra, mostrá-la invertida
#include <stdio.h>
#include <string.h>

void main(){

    char palavra[30];
    printf("Digite uma palavra: ");
    scanf("%s", palavra);

    for (int i = strlen(palavra); i >= 0; i--) {
        printf("%c", palavra[i]);
    }

}