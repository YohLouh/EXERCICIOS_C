// Receba um número e diga se é positivo ou não
#include <stdio.h>

void main(){
    int numero;
    printf("Insira um numero inteiro: ");
    scanf("%d", &numero);

    if(numero == 0){
        printf("Seu numero eh igual a 0.");
    } else if (numero < 0){
        printf("Seu numero eh negativo.");
    } else {
        printf("Seu numero eh positivo.");
    }
}