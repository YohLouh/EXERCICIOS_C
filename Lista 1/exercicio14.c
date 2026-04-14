#include <stdio.h>

void main(){
    int notas100, notas50, notas20, notas10;
    int valor;
    int resto;

    printf("Informe um valor inteiro: ");
    scanf("%d", &valor);


    notas100 = valor/100;
    resto = valor%100;
    notas50 = resto/50;
    notas20 = (resto%50)/20;
    notas10 = ((resto%50)%20)/10;
    
    printf("100 = %d\n50 = %d\n20 = %d\n10 = %d", notas100, notas50, notas20, notas10);

    }
