// Ler 4 números float e calcular média
#include <stdio.h>

void main(){

    float num[4];
    float media = 0;
    printf("Digite 4 notas: ");
    for(int i = 0; i < 4; i++){
        scanf("%f", &num[i]);
        media += num[i];
    }
    
    printf("A media eh: %.2f", media/4);

}