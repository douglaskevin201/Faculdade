#include <stdio.h>

int main() {
    int opcao;
    float nota1, nota2, media;

    printf("===MENU DE GERENCIAMENTO DE NOTAS===\n");
    printf("1. Calcular a media\n");
    printf("2. Determinar status\n");
    printf("3. Sair\n");
    printf("Escolha uma opção: ");
    scanf("%d", &opcao);

    switch (opcao) {
    case 1:
        printf("Digite a primeira nota:\n");
        scanf("%f", &nota1);

        printf("Digite a segunda nota:\n");
        scanf("%f", &nota2);

        media = (nota1 + nota2) / 2;

        printf("A sua media é %.2f\n", media);
        break;

    case 2:
        printf("Digite a media do estudante:\n");
        scanf("%f", &media);

        if (media >= 7) {
            printf("Status: APROVADO!!\n");
        } else if (media >= 5) {
            printf("Status: Recuperação!!\n");
        }else{
            printf("Status: REPROVADO!!\n");
        }
        break;
        
    case 3:
        printf("Saindo...\n");
        break;
    default:
        printf("Opção Invalida!! Tente novamente.");
        break;
    } 

    return 0;  
}