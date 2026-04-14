// Cálculo de desconto com base no valor de uma compra
#include <stdio.h>

void main(){
    float compra;
    printf("\nInsira o valor da compra: ");
    scanf("%f", &compra);
    float desconto;

    if(compra <= 0){
        printf("Valor invalido.");

    } else if(compra <= 60.00 && compra > 1.00){
        desconto = 0.00;
        compra = compra-(compra*desconto);
        printf("\nEsse valor nao possui desconto.");

    } else if (compra > 60.00 && compra <= 100.00){
        desconto = 0.10;
        compra = compra-(compra*desconto);
        printf("\nNovo valor da compra: %.2f", compra);

    } else if (compra > 100.00 && compra <= 150){
        desconto = 0.20;
        compra = compra-(compra*desconto);
        printf("\nNovo valor da compra: %.2f", compra);
    } else {
        desconto = 0.30;
        compra = compra-(compra*desconto);
        printf("\nNovo valor da compra: %.2f", compra);
    }
}