// Receba dois números e diga qual é o maior por uma função
#include <stdio.h>

int maior (int a, int b){
    int maior;
    if(a > b){
        maior = a;
    } else {
        maior = b;
    }
    return maior;
}

void main(){
    int a, b;
    printf("Digite dois numeros inteiros: ");
    scanf("%d %d", &a, &b);
    printf("O maior eh: %d", maior(a, b));
}