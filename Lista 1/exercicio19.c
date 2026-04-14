// Sistema de voto simples com switch
#include <stdio.h>

void main(){
    int opcao;
    int cand1 = 0;
    int cand2 = 0;
    int cand3 = 0;
    int nulo = 0;
    int branco = 0;
   
    printf("-----------------------------\n");
    printf("----   1 - candidato 1   ----\n");
    printf("----   2 - candidato 2   ----\n");
    printf("----   3 - candidato 3   ----\n");
    printf("----   4 - branco        ----\n");
    printf("----   5 - nulo          ----\n");
    printf("----   6 - sair          ----\n");
    printf("-----------------------------\n");
   
    while (opcao != 6){
        printf("\nInsira um numero para votar: ");
        scanf("%d", &opcao);
       
        switch(opcao){
            case 1:
                cand1++;
                printf("+1 candidato 1!\nTotal: %d\n", cand1);
                break;
            case 2:
                cand2++;
                printf("+1 candidato 2!\nTotal: %d\n", cand2);
                break;
            case 3:
                cand3++;
                printf("+1 candidato 3!\nTotal: %d\n", cand3);
                break;
            case 4:
                branco++;
                printf("+1 branco!\nTotal: %d\n", branco);
                break;
            case 5:
                nulo++;
                printf("+1 nulo!\nTotal: %d\n", nulo);
                break;
            default:
                printf("Voto invalido.");
                break;
        }
    }
}