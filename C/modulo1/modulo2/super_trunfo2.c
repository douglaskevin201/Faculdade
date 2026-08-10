#include <stdio.h>
#include <string.h>

int main() {
    // --- VARIÁVEIS DA CARTA 1 ---
    char estado1[50];
    char codigo1[10];
    char cidade1[50];
    int populacao1;
    float area1, pib1;
    int ponto1;
    float densidade1;
    float pib_per_capita1;

    // --- VARIÁVEIS DA CARTA 2 ---
    char estado2[50];
    char codigo2[10];
    char cidade2[50];
    int populacao2;
    float area2, pib2;
    int ponto2;
    float densidade2;
    float pib_per_capita2;

    // === CADASTRO DA CARTA 1 ===
    printf("--- Cadastro da Carta 1 ---\n");
    printf("Estado: ");
    scanf(" %[^\n]", estado1);
    printf("Código da Carta: ");
    scanf(" %s", codigo1);
    printf("Nome da Cidade: ");
    scanf(" %[^\n]", cidade1);
    printf("População: ");
    scanf(" %d", &populacao1);
    printf("Área (km²): ");
    scanf(" %f", &area1);
    printf("PIB (Bilhões): ");
    scanf(" %f", &pib1);
    printf("Número de Pontos Turísticos: ");
    scanf(" %d", &ponto1);

    // === CADASTRO DA CARTA 2 ===
    printf("\n--- Cadastro da Carta 2 ---\n");
    printf("Estado: ");
    scanf(" %[^\n]", estado2);
    printf("Código da Carta: ");
    scanf(" %s", codigo2);
    printf("Nome da Cidade: ");
    scanf(" %[^\n]", cidade2);
    printf("População: ");
    scanf(" %d", &populacao2);
    printf("Área (km²): ");
    scanf(" %f", &area2);
    printf("PIB (Bilhões): ");
    scanf(" %f", &pib2);
    printf("Número de Pontos Turísticos: ");
    scanf(" %d", &ponto2);

    // === PROCESSAMENTO (CÁLCULOS) ===
    densidade1 = (float)populacao1 / area1;
    pib_per_capita1 = (pib1 * 1000000000.0f) / (float)populacao1;

    densidade2 = (float)populacao2 / area2;
    pib_per_capita2 = (pib2 * 1000000000.0f) / (float)populacao2;

    // === EXIBIÇÃO DO RESULTADO COM IF-ELSE (REQUISITO DO DESAFIO) ===
    printf("\n=== Comparação de cartas (Atributo: População) ===\n\n");
    printf("Carta 1 - %s (%s): %d habitantes\n", cidade1, estado1, populacao1);
    printf("Carta 2 - %s (%s): %d habitantes\n\n", cidade2, estado2, populacao2);

    // Lógica de decisão usando if-else para apontar o vencedor real
    if (populacao1 > populacao2) {
        printf("Resultado: Carta 1 (%s) venceu!\n", cidade1);
    } else if (populacao2 > populacao1) {
        printf("Resultado: Carta 2 (%s) venceu!\n", cidade2);
    } else {
        printf("Resultado: Empate! Ambas as cidades possuem a mesma população.\n");
    }

    return 0;
}