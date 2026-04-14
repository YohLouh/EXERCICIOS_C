#include <stdio.h>

void main(){
    int unidade;
    int dezena;
    int centena;
    int aluguel = 252;
    int resto;

    resto = aluguel%200; // 52
    centena = aluguel-resto; // 200
    dezena = resto-resto%50; // 50
    unidade = resto%50;
    
    printf("O valor do aluguel e: %d\n", aluguel);
    printf("Unidade: %d\n", unidade);
    printf("Dezena: %d\n", dezena);
    printf("Centena: %d\n", centena);
    }
