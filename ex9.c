// Ler palavra e contar quantas vogais tem
#include <stdio.h>
#include <string.h>

void main(){

    char vogais[10] = {'A','E','I','O','U','a','e','i','o','u'};
    int contarVogal = 0;
    char palavra[20];
    printf("Digite uma palavra: ");
    scanf("%s", palavra);

    for(int i = 0; i < strlen(palavra); i++){
        for(int j = 0; j < strlen(vogais); j++){
            if(palavra[i] == vogais[j]){
                contarVogal++;
            }
        }
    }

    printf("A sua palavra tem %d vogais", contarVogal);


}
