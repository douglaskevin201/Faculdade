#include <stdio.h>
#include <string.h>

int main(){
    char inicial1;
    char codigo1[4];
    char cidade1[50];
    int populacao1;
    float area1, pib1;
    int ponto1;

    char inicial2;
    char codigo2[4];
    char cidade2[50];
    int populacao2;
    float area2, pib2;
    int ponto2;


    printf("Carta 1:\n");

    printf("Estado: \n");
    scanf(" %c", &inicial1);

    printf("Codigo: \n");
    scanf("%s", codigo1);

    printf("Nome da cidade: \n");
    scanf(" %[^\n]", cidade1);
    

    printf("Populacao: \n");
    scanf("%d", &populacao1);
    getchar();
    

    printf("Area: \n");
    scanf(" %f", &area1);
    getchar();


    printf("PIB: \n");
    scanf(" %f", &pib1);
    getchar();

    printf("Numero de pontos turisticos: \n");
    scanf("%d", &ponto1);
    getchar();



    printf("Carta 2: \n");

    printf("Estado: \n");
    scanf(" %c", &inicial2);

    printf("Codigo: \n");
    scanf("%s", codigo2);
    

    printf("Nome da cidade: \n");
    scanf(" %[^\n]", cidade2);
    

    printf("Populacao: \n");
    scanf("%d", &populacao2);
    getchar();


    printf("Area: \n");
    scanf(" %f", &area2);
    getchar();


    printf("PIB: \n");
    scanf(" %f", &pib2);
    getchar();


    printf("Numero de pontos turisticos: \n");
    scanf("%d", &ponto2);
    getchar();


    printf("Carta 1: \n");
    printf("Estado: %c\nCodigo: %s\nNome da Cidade: %s\nPopulacao: %d\nArea: %.2f km²\nPIB: %.2f bilhoes\nPontos Turisticos: %d\n", inicial1, codigo1, cidade1, populacao1, area1, pib1, ponto1);

    printf("Carta 2: \n");
    printf("Estado: %c\nCodigo: %s\nNome da Cidade: %s\nPopulacao: %d\nArea: %.2f km²\nPIB: %.2f bilhoes\nPontos Turisticos: %d\n", inicial2, codigo2, cidade2, populacao2, area2, pib2, ponto2);

    return 0;





}