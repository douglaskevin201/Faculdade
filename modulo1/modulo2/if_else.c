#include <stdio.h>

int main() {
    // Declarando as variáveis dentro do main
    unsigned int estoque;
    double capital;
    double valor_total;

    printf("Analise de Estoque\n");
    printf("Digite a quantidade em estoque: \n");
    scanf(" %u", &estoque); // Espaço antes do % para limpar buffer

    printf("Digite o valor do produto: \n");
    
    scanf(" %lf", &capital); 

    valor_total = estoque * capital;

    printf("\n=== Relatorio do Produto ===\n");

    
    if (estoque < 10) {
        printf("Status do estoque: ALERTA! Estoque Baixo. \n");
    } else {
        printf("Status do estoque: OK (Adequado).\n");
    }

    
    if (valor_total > 5000.00) {
        printf("Alerta Financeiro: Capital de giro acumulado alto (R$ %.2f)!\n", valor_total);
    }

    return 0;
}