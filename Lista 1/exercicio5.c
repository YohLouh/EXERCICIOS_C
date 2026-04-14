#include <stdio.h>


void main(){

    // Menu vvv
    printf("----------------------------------\n");
    printf("-----      1 >> Adicao       -----\n");
    printf("-----     2 >> Subtracao     -----\n");
    printf("-----   3 >> Multiplicacao   -----\n");
    printf("-----      4 >> Divisao      -----\n");
    printf("----------------------------------\n");


    int opcao;
    float numero1;
    float numero2;

    while(opcao != 5){
        printf("Insira dois numeros e um operador: ");
        scanf("%f %f", &numero1, &numero2);
        scanf("%d", &opcao);

        switch(opcao){
            case 1:
                printf("%.2f + %.2f = %.2f \n", numero1, numero2, numero1 + numero2);
                break;
            case 2:
                printf("%.2f - %.2f = %.2f \n", numero1, numero2, numero1 - numero2);
                break;
            case 3:
                printf("%.2f * %.2f = %.2f \n", numero1, numero2, numero1 * numero2);
                break;
            case 4:
                if(numero2 != 0) {
                    printf("%.2f / %.2f = %.2f \n", numero1, numero2, numero1 / numero2);
                } else {
                    printf("Divisao por zero!\n");
                }
                break;
            default:
                printf("opcao invalida. \n");
        
        }
    }
}