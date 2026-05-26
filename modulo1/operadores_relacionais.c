#include <stdio.h>

int main() {
    unsigned int estoque1;
    double valor_total1;

    unsigned int estoque2;
    double valor_total2;

    printf("--- Produto 1 ---\n");
    printf("Quantidade em estoque: ");
    scanf("%u", &estoque1);
    printf("Valor total em estoque (R$): ");
    scanf("%lf", &valor_total1);

    printf("--- Produto 2 ---\n");
    printf("Quantidade em estoque: ");
    scanf("%u", &estoque2);
    printf("Valor total em estoque (R$): ");
    scanf("%lf", &valor_total2);

    printf("\n=== Relatorio do inventario (1 = sim / 0 = não) ===\n");
    printf("Produto 1 tem maior quantidade em estoque que o produto 2? : %d\n", estoque1 > estoque2);
    printf("Produto 1 tem mais valor total que produto 2? : %d\n", valor_total1 > valor_total2);
    printf("Os Produtos possuem a mesma quantidade em estoque? : %d\n", estoque1 == estoque2);

    return 0;

}

