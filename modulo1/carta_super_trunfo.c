#include <stdio.h>
#include <string.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "Portuguese");

    char inicial1[3];       
    char codigo1[10];
    char cidade1[50];
    unsigned long int populacao1;
    float area1, pib1;
    int ponto1;
    float densidade1;
    double pib_per_capital1;
    double superPoder1;     

    char inicial2[3];       
    char codigo2[10];
    char cidade2[50];
    unsigned long int populacao2;
    float area2, pib2;
    int ponto2;
    float densidade2;
    double pib_per_capital2;
    double superPoder2;     

    int opcao;

    printf("Carta 1:\n");

    printf("Estado: \n");
    scanf(" %2s", inicial1);    

    printf("Codigo: \n");
    scanf(" %s", codigo1);

    printf("Nome da cidade: \n");
    scanf(" %[^\n]", cidade1);

    printf("Populacao: \n");
    scanf(" %lu", &populacao1);

    printf("Area: \n");
    scanf(" %f", &area1);

    printf("PIB: \n");
    scanf(" %f", &pib1);

    printf("Numero de pontos turisticos: \n");
    scanf(" %d", &ponto1);

   
    printf("\nCarta 2: \n");

    printf("Estado: \n");
    scanf(" %2s", inicial2);    

    printf("Codigo: \n");
    scanf(" %s", codigo2);

    printf("Nome da cidade: \n");
    scanf(" %[^\n]", cidade2);

    printf("Populacao: \n");
    scanf(" %lu", &populacao2);

    printf("Area: \n");
    scanf(" %f", &area2);

    printf("PIB: \n");
    scanf(" %f", &pib2);

    printf("Numero de pontos turisticos: \n");
    scanf(" %d", &ponto2);


    densidade1 = (float)populacao1 / area1;
    pib_per_capital1 = (pib1 * 1000000000.0) / (double)populacao1;
    superPoder1 = (double)populacao1 + area1 + pib1 + ponto1 + pib_per_capital1 + (1.0 / densidade1);

    densidade2 = (float)populacao2 / area2;
    pib_per_capital2 = (pib2 * 1000000000.0) / (double)populacao2;
    superPoder2 = (double)populacao2 + area2 + pib2 + ponto2 + pib_per_capital2 + (1.0 / densidade2);


    printf("\nCarta 1: \n");
    printf("Estado: %s\nCodigo: %s\nNome da Cidade: %s\nPopulacao: %lu\nArea: %.2f km²\nPIB: %.2f bilhoes\nPontos Turisticos: %d\n", inicial1, codigo1, cidade1, populacao1, area1, pib1, ponto1);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade1);
    printf("PIB per Capita: %.2f reais\n\n", pib_per_capital1);


    printf("Carta 2: \n");
    printf("Estado: %s\nCodigo: %s\nNome da Cidade: %s\nPopulacao: %lu\nArea: %.2f km²\nPIB: %.2f bilhoes\nPontos Turisticos: %d\n", inicial2, codigo2, cidade2, populacao2, area2, pib2, ponto2);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade2);
    printf("PIB per Capita: %.2f reais\n", pib_per_capital2);


    printf("\n=== ESCOLHA O ATRIBUTO DE COMPARAÇÃO ===\n");
    printf("1. População\n");
    printf("2. Área\n");
    printf("3. PIB\n");
    printf("4. Pontos Turísticos\n");
    printf("5. Densidade Populacional\n");
    printf("6. PIB per Capita\n");
    printf("7. Super Poder\n");
    printf("Digite a opção desejada: ");
    scanf(" %d", &opcao);

    printf("\n=== RESULTADO DA BATALHA ===\n\n");

    switch(opcao) {
        case 1:
            printf("Atributo: População\n");
            printf("%s: %lu\n", cidade1, populacao1);
            printf("%s: %lu\n\n", cidade2, populacao2);
            if (populacao1 > populacao2) {
                printf("Vencedor: %s (Carta 1)\n", cidade1);
            } else if (populacao2 > populacao1) {
                printf("Vencedor: %s (Carta 2)\n", cidade2);
            } else {
                printf("Empate!\n");
            }
            break;

        case 2:
            printf("Atributo: Área\n");
            printf("%s: %.2f km²\n", cidade1, area1);
            printf("%s: %.2f km²\n\n", cidade2, area2);
            if (area1 > area2) {
                printf("Vencedor: %s (Carta 1)\n", cidade1);
            } else if (area2 > area1) {
                printf("Vencedor: %s (Carta 2)\n", cidade2);
            } else {
                printf("Empate!\n");
            }
            break;

        case 3:
            printf("Atributo: PIB\n");
            printf("%s: %.2f bilhões\n", cidade1, pib1);
            printf("%s: %.2f bilhões\n\n", cidade2, pib2);
            if (pib1 > pib2) {
                printf("Vencedor: %s (Carta 1)\n", cidade1);
            } else if (pib2 > pib1) {
                printf("Vencedor: %s (Carta 2)\n", cidade2);
            } else {
                printf("Empate!\n");
            }
            break;

        case 4:
            printf("Atributo: Pontos Turísticos\n");
            printf("%s: %d\n", cidade1, ponto1);
            printf("%s: %d\n\n", cidade2, ponto2);
            if (ponto1 > ponto2) {
                printf("Vencedor: %s (Carta 1)\n", cidade1);
            } else if (ponto2 > ponto1) {
                printf("Vencedor: %s (Carta 2)\n", cidade2);
            } else {
                printf("Empate!\n");
            }
            break;

        case 5:
            printf("Atributo: Densidade Populacional\n");
            printf("%s: %.2f hab/km²\n", cidade1, densidade1);
            printf("%s: %.2f hab/km²\n\n", cidade2, densidade2);
            if (densidade1 < densidade2) {
                printf("Vencedor: %s (Carta 1)\n", cidade1);
            } else if (densidade2 < densidade1) {
                printf("Vencedor: %s (Carta 2)\n", cidade2);
            } else {
                printf("Empate!\n");
            }
            break;

        case 6:
            printf("Atributo: PIB per Capita\n");
            printf("%s: %.2f reais\n", cidade1, pib_per_capital1);
            printf("%s: %.2f reais\n\n", cidade2, pib_per_capital2);
            if (pib_per_capital1 > pib_per_capital2) {
                printf("Vencedor: %s (Carta 1)\n", cidade1);
            } else if (pib_per_capital2 > pib_per_capital1) {
                printf("Vencedor: %s (Carta 2)\n", cidade2);
            } else {
                printf("Empate!\n");
            }
            break;

        case 7:
            printf("Atributo: Super Poder\n");
            printf("%s: %.2f\n", cidade1, superPoder1);
            printf("%s: %.2f\n\n", cidade2, superPoder2);
            if (superPoder1 > superPoder2) {
                printf("Vencedor: %s (Carta 1)\n", cidade1);
            } else if (superPoder2 > superPoder1) {
                printf("Vencedor: %s (Carta 2)\n", cidade2);
            } else {
                printf("Empate!\n");
            }
            break;

        default:
            printf("Opção inválida!\n");
            break;
    }

    return 0;
}