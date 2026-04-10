// Ler palavra e dizer se é palíndromo
#include <stdio.h>
#include <string.h>

void main(){

    char palavra[20];
    int qntletra = 0;
    printf("Digite uma palavra: ");
    scanf("%s", &palavra);

    printf("Ao contrario: ");
    for (int i = 0; i < strlen(palavra); i++) {
        printf("%c", palavra[strlen(palavra) - i - 1]);
        if(palavra[i] == palavra[strlen(palavra) - i - 1]){
            qntletra++;
        }
    }

    if (qntletra == strlen(palavra)){
        printf("\nEh um palindromo");
    } else {
        printf("\nNao eh palindromo");
    }

}