// Leia uma frase e contes as letras maiúsculas
#include <stdio.h>
#include <string.h>

void main(){

    int contarMaiusculas = 0;
    char frase[100];
    printf("Digite uma frase: ");
    fgets(frase, 100, stdin);

    for(int i = 0; i < strlen(frase); i++){
        if(frase[i] >= 65 && frase[i] <= 90){
            contarMaiusculas++;
        }
    }

    printf("A sua frase tem %d letras maiusculas", contarMaiusculas);


}