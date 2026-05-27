#include <stdio.h>
#include <string.h>

int main(){
    char inicial1[3];       // CORRIGIDO: era char, não cabia "CE", "SP", etc.
    char codigo1[10];
    char cidade1[50];
    unsigned long int populacao1;
    float area1, pib1;
    int ponto1;
    float densidade1;
    double pib_per_capital1;
    double superPoder1;     // CORRIGIDO: float perdia precisão

    char inicial2[3];       // CORRIGIDO
    char codigo2[10];
    char cidade2[50];
    unsigned long int populacao2;
    float area2, pib2;
    int ponto2;
    float densidade2;
    double pib_per_capital2;
    double superPoder2;     // CORRIGIDO

    // === ENTRADA DE DADOS - CARTA 1 ===
    printf("Carta 1:\n");

    printf("Estado: \n");
    scanf(" %2s", inicial1);    // CORRIGIDO: era %c

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


    // === ENTRADA DE DADOS - CARTA 2 ===
    printf("\nCarta 2: \n");

    printf("Estado: \n");
    scanf(" %2s", inicial2);    // CORRIGIDO: era %c

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


    // === PROCESSAMENTO ===
    densidade1 = (float)populacao1 / area1;
    pib_per_capital1 = (pib1 * 1000000000.0) / (double)populacao1;
    superPoder1 = (double)populacao1 + area1 + pib1 + ponto1 + pib_per_capital1 + (1.0 / densidade1);

    densidade2 = (float)populacao2 / area2;
    pib_per_capital2 = (pib2 * 1000000000.0) / (double)populacao2;
    superPoder2 = (double)populacao2 + area2 + pib2 + ponto2 + pib_per_capital2 + (1.0 / densidade2);


    // === SAÍDA DE DADOS - CARTA 1 ===
    printf("\nCarta 1: \n");
    printf("Estado: %s\nCodigo: %s\nNome da Cidade: %s\nPopulacao: %lu\nArea: %.2f km²\nPIB: %.2f bilhoes\nPontos Turisticos: %d\n", inicial1, codigo1, cidade1, populacao1, area1, pib1, ponto1);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade1);
    printf("PIB per Capita: %.2f reais\n\n", pib_per_capital1);


    // === SAÍDA DE DADOS - CARTA 2 ===
    printf("Carta 2: \n");
    printf("Estado: %s\nCodigo: %s\nNome da Cidade: %s\nPopulacao: %lu\nArea: %.2f km²\nPIB: %.2f bilhoes\nPontos Turisticos: %d\n", inicial2, codigo2, cidade2, populacao2, area2, pib2, ponto2);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade2);
    printf("PIB per Capita: %.2f reais\n", pib_per_capital2);


    // === BLOCO DE COMPARAÇÃO (BATALHA) ===
    printf("\n=== Comparacao de Cartas (1 = SIM / 0 = NÃO)===\n");
    printf("População: Carta 1 venceu (%d)\n", populacao1 > populacao2);
    printf("Área: Carta 1 venceu (%d)\n", area1 > area2);
    printf("PIB: Carta 1 venceu (%d)\n", pib1 > pib2);
    printf("Pontos Turísticos: Carta 1 venceu (%d)\n", ponto1 > ponto2);
    printf("Densidade Populacional: Carta 1 venceu (%d)\n", densidade1 < densidade2);
    printf("PIB per Capita: Carta 1 venceu (%d)\n", pib_per_capital1 > pib_per_capital2);
    printf("Super Poder: Carta 1 venceu (%d)\n", superPoder1 > superPoder2);

    return 0;
}