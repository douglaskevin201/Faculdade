#include <stdio.h>

int main() {
    char aluno[50];
    float nota1;
    float nota2;
    float media;

    printf("Nome do aluno: ");
    scanf("%s", aluno);
    getchar();

    printf("\nPrimeira nota: ");
    scanf(" %f", &nota1);
    getchar();
    
    printf("\nSegunda nota: ");
    scanf(" %f", &nota2);
    getchar();

    media = (nota1 + nota2) / 2;


    printf("\nAluno: %s\nNota 1: %.2f\nNota 2: %.2f\nMedia: %.2f", aluno, nota1, nota2, media);

    return 0;

}