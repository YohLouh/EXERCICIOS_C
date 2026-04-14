// Classificação de um triângulo com base na medida e ângulo de cada lado
#include <stdio.h>

float angulos(float angulo1, float angulo2, float angulo3){
   
    if (angulo1 == 180 || angulo2 == 180 || angulo3 == 180){
        printf("Triangulo degenerado!!!");
    } else if (angulo1 < 90 && angulo2 < 90 && angulo3 < 90){
        printf("Triangulo acutangulo");
    } else if (angulo1 > 90 || angulo2 > 90 || angulo3 > 90){
        printf("Triangulo obtusangulo");
    } else if (angulo1 == 90 || angulo2 == 90 || angulo3 == 90){
        printf("Triangulo retangulo");
    } else {
        printf("Invalido...");
    }
    return 0;
}

void main() {
    float angulo1, angulo2, angulo3;
    float lado1, lado2, lado3;
   
    printf("Digite a medida de cada um dos tres lados do triangulo: ");
    scanf("%f %f %f", &lado1, &lado2, &lado3);
   
    printf("Digite o angulo de cada um dos tres cantos do triangulo: ");
    scanf("%f %f %f", &angulo1, &angulo2, &angulo3);
   
    if (lado1 < 0 || lado2 < 0 || lado3 < 0){
        printf("Invalido...");
    } else if(lado1 == lado2 && lado2 == lado3){
        printf("Triangulo equilatero\n&\n");
        angulos(angulo1, angulo2, angulo3);
    } else if (lado1 == lado2 || lado2 == lado3 || lado1 == lado3){
        printf("Triangulo isosceles\n&\n");
        angulos(angulo1, angulo2, angulo3);
    } else {
        printf("Triangulo escaleno\n&\n");
        angulos(angulo1, angulo2, angulo3);
    }
}