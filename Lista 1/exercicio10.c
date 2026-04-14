#include <stdio.h>

void main(){
    int ano;
    printf("Digite um ano: ");
    scanf("%d", &ano);


    if (ano % 4 == 0){
         if (ano % 400 == 0 && ano % 100 == 0){
            printf("O ano inserido eh bissexto.");
        } else if(ano % 100 != 0){
            printf("O ano inserido eh bissexto.");
        } else {
            printf("O ano inserido nao eh bissexto.");
        }
    } else {
        printf("O ano inserido nao eh bissexto.");
    }
}