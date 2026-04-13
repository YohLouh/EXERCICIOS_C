// Leia uma letra e informe se é vogal/consoante

#include <stdio.h>
#include <string.h>

void main(){

    char letra;
    printf("Insira uma letra: ");
    scanf("%c", &letra);

    if(letra == 'a' || letra == 'e' || letra == 'i' || letra == 'o' || letra == 'u' || letra == 'A' || letra == 'E' || letra == 'I' || letra == 'O' || letra == 'U'){
        printf("Sua letra eh uma vogal.");
    } else {
        printf("Sua letra eh uma consoante.");
    }
}