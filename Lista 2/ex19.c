// Crie um menu com as opções 1 - Contar caractéres, 2 - contar Vogais, 3 - Inverter palavra, 4 - Sair, com do while
#include <stdio.h>
#include <string.h>

int qntCaracteres(char nome[], int quantidadeletra, int tamanhoVetor){
    
    quantidadeletra = 0;

    for(int i = 0; i < 30; i++){
        if(nome[i] != '\0'){
            quantidadeletra++;
        } else {
            break;
        }
    }
    printf("Sua palavra tem %d letras\n", quantidadeletra);

}
int contarVogais(char palavra[], int contarVogal, int tamanhoVetor){
    
    char vogais[11] = {'A','E','I','O','U','a','e','i','o','u','\0'};
    contarVogal = 0;

    for(int i = 0; i < strlen(palavra); i++){
        for(int j = 0; j < strlen(vogais); j++){
            if(palavra[i] == vogais[j]){
                contarVogal++;
            }
        }
    }

    printf("A sua palavra tem %d vogais\n", contarVogal);

}
int inverterPalavra(char palavra2[], int tamanhoVetor){

    for (int i = strlen(palavra2); i >= 0; i--) {
        printf("%c\n", palavra2[i]);
    }

}

void main(){

    int opcao;
    char nome[30], palavra[30], palavra2[30];
    int quantidadeletra, contarVogal;

    printf("--------------------------------------\n");
    printf("-----     1) Contar Caracteres   -----\n");
    printf("-----     2) Contar Vogais       -----\n");
    printf("-----     3) Inverter Palavra    -----\n");
    printf("-----     4) Sair                -----\n");
    printf("--------------------------------------\n");


    do{
        
        printf("\nInsira um numero para realizar uma acao: ");
        scanf("%d", &opcao);
        switch(opcao){
            case 1:
                printf("\nContar caracteres:\n");
                printf("Insira um nome: ");
                scanf("%s", &nome);
                qntCaracteres(nome, quantidadeletra, 30);
                break;
            case 2:
                printf("\nContar Vogais:\n");
                printf("Digite uma palavra: ");
                scanf("%s", &palavra);
                contarVogais(palavra, contarVogal, 30);
                break;
            case 3:
                printf("\nInverter Palavra:\n");
                printf("Digite uma palavra: ");
                scanf("%s", palavra2);
                inverterPalavra(palavra2,30);
                break;
            default:
                printf("Invalido/sair");
        }
    } while(opcao != 4);

}