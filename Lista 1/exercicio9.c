// Receba dois números e diga se um é múltiplo do outro
#include <stdio.h>

void main(){
    int num1, num2;
    printf("Digite dois numeros inteiros: ");
    scanf("%d %d", &num1, &num2);

    if (num1 >= num2){
        if (num1 % num2 == 0){
            printf("%d eh multiplo de %d.", num1, num2);
        } else {
            printf("%d nao eh multiplo de %d.", num1, num2);
        }
    } else {
        if (num2 % num1 == 0){
            printf("%d eh multiplo de %d.", num2, num1);
        } else {
            printf("%d nao eh multiplo de %d.", num2, num1);
        }
    }
}



