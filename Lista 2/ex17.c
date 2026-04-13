// Ler palavra e substituir 'a' por '@'
#include <stdio.h>
#include <string.h>

void main(){

    char palavra[20];
    int i = 0;
    printf("Insira uma palavra: ");
    scanf("%s", &palavra);

    for (; i < strlen(palavra);){
        if(palavra[i] == 'a' || palavra[i] == 'A'){
            palavra[i] = '@';
        }
        i++;
    }  
    printf("%s", palavra);
}
