// Cálculo de aumento salarial conforme uma tabela
#include <stdio.h>

void main(){
    float salario;
    printf("\nInsira o salario: ");
    scanf("%f", &salario);
    float aumento;

    if(salario >= 1621.00 && salario < 2500.00){
        aumento = 6.79;
        salario = (salario*(100+aumento))/100;
        printf("\nNovo salario: %.2f", salario);

    } else if(salario > 2500.00){
        aumento = 4.00;
        salario = (salario*(100+aumento))/100;
        printf("\nNovo salario: %.2f", salario);

    } else {
        printf("Salario invalido.");
    }
}
