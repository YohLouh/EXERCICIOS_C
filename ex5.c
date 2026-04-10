// Leia uma letra e mostre a contagem regressiva até 'a'

#include <stdio.h>
#include <string.h>

void main(){

    char letra;
    printf("Insira uma letra: ");
    scanf("%c", &letra);
    printf("%c!\n", letra);

    if (letra < 97){
        while (letra < 98){
            letra++;
            printf("%d\n", letra);
        }
        printf("%c!\n", 97);

    } else if (letra == 97){
        printf("Sua letra ja eh %c!", 97);
        
    } else {
        while (letra > 96){
            letra--;
            printf("%d\n", letra);
        }
        printf("%c!\n", 97);
    }
}