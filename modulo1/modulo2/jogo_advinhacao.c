#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int opcao;
    int palpite;
    int numeroSecreto;

    printf("=== JOGO DE ADIVINHACAO ===\n");
    printf("1. Iniciar Jogo\n");
    printf("2. Ver Regras\n");
    printf("3. Sair\n");
    printf("Escolha uma opcao: ");
    scanf(" %d", &opcao);

    switch (opcao) {
        case 1:
            // Inicializa o gerador de numeros com base no tempo atual
            srand(time(0));
            numeroSecreto = rand() % 10 + 1; // Sorteia entre 1 e 10

            printf("\nNovo jogo iniciado! Adivinhe o numero (entre 1 e 10): ");
            scanf(" %d", &palpite);

            // If-else aninhado dentro do case
            if (palpite == numeroSecreto) {
                printf("Parabens! Voce acertou!\n");
            } else {
                printf("Voce errou. O numero secreto era: %d\n", numeroSecreto);
            }
            break;

        case 2:
            printf("\n=== REGRAS DO JOGO ===\n");
            printf("1. O sistema vai gerar um numero de 1 a 10.\n");
            printf("2. Voce tem apenas 1 chance de acertar.\n");
            printf("3 Sair do programa.\n");
            break;

        case 3:
            printf("Saindo do programa...\n");
            break;

        default:
            printf("Opcao invalida. Tente novamente.\n");
            break;
    }

    return 0;
}