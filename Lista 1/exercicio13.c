// Cálculo de imposto com base no salário recebido
#include <stdio.h>

void main(){
    float salario;
    printf("Informe o salario: ");
    scanf("%f", &salario);
    float imposto;

        if (salario < 5000 && salario > 0){
            imposto = 0;
        } else if (salario >= 5000 && salario < 7500){
            imposto = 500;
        } else if (salario >= 7500){
            imposto = salario * 0.15;
        } else {
            printf("Salario invalido\n");
        }

    printf("O imposto eh: %.2f \n", imposto);
}