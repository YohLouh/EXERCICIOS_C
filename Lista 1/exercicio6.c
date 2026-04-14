// Receba duas notas e, com uma função, diga a média
#include <stdio.h>

float media (float nota1, float nota2){
    float media;
    media = (nota1 + nota2)/2;
    return media;
}

void main(){
   float nota1, nota2;
   scanf("%f %f", &nota1, &nota2);


   if(media(nota1, nota2) < 0){
        printf("Notas invalidas.");
   } else if (media(nota1, nota2) >= 7){
        printf("Aprovado!");
   } else if ((media(nota1, nota2) >= 5) && (media(nota1, nota2) < 7)){
        printf("Recuperacao.");
   } else {
        printf("Reprovado.");
   }
}