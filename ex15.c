// Ler frase e contar os espaços
#include <stdio.h>
#include <string.h>

void main(){

    char frase[80];
    int espacos = 0;
    printf("Digite uma frase: \n");
    fgets(frase, 80, stdin);
    
    for (int i = 0; i < strlen(frase); i++){
        if (frase[i] == ' '){
            espacos++;
        }
    }
    printf("A quantidade de espacos eh: %d", espacos);

}