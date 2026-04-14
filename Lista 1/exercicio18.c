#include <stdio.h>

void main(){
    int parcelas;
    float valor, juros;
    float total;

    printf("Insira o valor da compra: ");
    scanf("%f", &valor);

    printf("Insira o numero de parcelas: ");
    scanf("%d", &parcelas);

    
    if(parcelas <= 5){
        juros = 0.05;
    } else if (parcelas > 5 && parcelas < 10){
        juros = 0.1;
    } else {
        juros = 1.0;
    }
    
    total = valor + (juros*valor);
    printf("%.2f", total);
}