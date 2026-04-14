// Função que diga se um número é par, retornando 1 se sim, e 0 se não
#include <stdio.h>

int ehPar(int num){
    int ehPar;
    if (num % 2 == 0){
        ehPar = 1;
    } else {
        ehPar = 0;
    }
    return ehPar;
}

void main(){

    int num;
    printf("-- Caso 0 - numero impar --\n-- Caso 1 - numero par --\n");
    printf("Digite um numero inteiro: ");
    scanf("%d", &num);
    printf("%d", ehPar(num));

}