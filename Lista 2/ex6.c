// Leia um nome e mostre-o 5x

#include <stdio.h>
#include <string.h>

void main(){
    
    char nome[100];
    int i;
    printf("Insira um nome: ");
    scanf("%s", &nome);

    for (i = 0; i < 5; i++){
        printf("%s\n", nome);
    }

}