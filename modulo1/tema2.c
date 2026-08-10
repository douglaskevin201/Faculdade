#include <stdio.h>


int main(){
    int idade = 25;
    float altura = 1.88;
    double saldoBancario = 1.100;
    char inicial = 'K';
    char nome[20] = "Kevin";

    printf("Idade: %d\n", idade);
    printf("Altura: %.2f metros\n", altura);
    printf("Saldo bancario: %.3f reais\n", saldoBancario);
    printf("Inicial do nome: %c\n", inicial);
    printf("Nome: %s\n", nome);
    return 0;
}