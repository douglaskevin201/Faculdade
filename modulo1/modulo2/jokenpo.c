#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {

    int escolha_jogador;
    int escolha_pc;

    srand(time(0));

    printf(" === PEDRA PAPEL TESOURA ===\n");
    printf("Digite 1 para PEDRA\n");
    printf("Digite 2 para PAPEL\n");
    printf("Digite 3 para TESOURA\n");
    printf("Digite sua escolha: ");
    scanf("%d", &escolha_jogador);

    if (escolha_jogador < 1 || escolha_jogador > 3){
        printf("Escolha invalida! Encerrando o jogo\n");
        return 0;
    }

    switch (escolha_jogador) {
    case 1: printf("Você escolheu: PEDRA\n", escolha_jogador); break;
    case 2: printf("Você escolheu: PAPEL\n", escolha_jogador); break;
    case 3: printf("Você escolheu: TESOURA\n", escolha_jogador); break;
    }

    escolha_pc = rand() % 3 + 1;

    switch (escolha_pc){
        case 1: printf("A maquina escolheu: PEDRA\n"); break;
        case 2: printf("A maquina escolhue: PAPEL\n"); break;
        case 3: printf("A maquina escolheu: TESOURA\n"); break;
    
    }

    if (escolha_jogador == escolha_pc) {
        printf("Resultado: EMPATE!\n");
    }
    else if((escolha_jogador == 1 && escolha_pc == 3) ||
            (escolha_jogador == 2 && escolha_pc == 1) ||
            (escolha_jogador == 3 && escolha_pc == 2))
    {
        printf("Resultado: Você Ganhou!!\n");
    }
    else {
        printf("Resultado: A maquina Ganhou!\n");

    }

    return 0;



}