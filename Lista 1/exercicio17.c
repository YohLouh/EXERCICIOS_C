#include <stdio.h>

float media (float nota1, float nota2){
    float media;
    media = (nota1 + nota2)/2;
    printf("Media: %.2f\n", media);

    if(media < 0){
        printf("Notas invalidas.");
   } else if (media >= 7){
        media = 2;
   } else if ((media >= 5) && (media < 7)){
        media = 1;
   } else {
        media = 0;
   }
   return media;
}

int presenca (int aulasTotais, int aulasFaltas){
    int presenca = aulasTotais - aulasFaltas;
    return presenca;
}

void main(){
    float nota1, nota2;
    int aulasTotais = 200;
    int aulasFaltas;

    printf("Insira quantas faltas o aluno tem: ");
    scanf("%d", &aulasFaltas);
    printf("Aulas comparecidas: %d", presenca(aulasTotais, aulasFaltas));

    printf("\nInsira duas notas: ");
    scanf("%f %f", &nota1, &nota2);
    

    if (media(nota1, nota2) == 2){
          if(presenca(aulasTotais, aulasFaltas) == 200){
               printf("Aprovado!");
          } else if (presenca(aulasTotais, aulasFaltas) < 200 && presenca(aulasTotais, aulasFaltas) > 180){
               printf("Aprovado.");
          } else {
               printf("Reprovado...");
          }
     } else {
          printf("Reprovado.");
     }

}