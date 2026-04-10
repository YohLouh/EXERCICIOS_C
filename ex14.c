// Ler palavra, mostrá-la invertida sem strlen()
#include <stdio.h>
#include <string.h>

void main(){

    char palavra[30];
    int posicao = 0;
    printf("Digite uma palavra: ");
    scanf("%s", &palavra);

    while(palavra[posicao] != '\0'){
        posicao++;
    }

    for (int i = posicao - 1; i >= 0; i--){
        printf("%c", palavra[i]);
    }

}