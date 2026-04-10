// Leia uma palavra e conte seus caracteres sem strlen
#include <stdio.h>
#include <string.h>

void main(){
    
    char nome[30];
    printf("Insira um nome: ");
    scanf("%s", &nome);
    int quantidadeletra = 0;

    for(int i = 0; i < 30; i++){
        if(nome[i] != '\0'){
            quantidadeletra++;
        } else {
            break;
        }
    }
    printf("%d", quantidadeletra);

}