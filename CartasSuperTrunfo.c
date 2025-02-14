#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {
    char codigo[4], nome[50], pontos_turisticos[100];
    int populacao;
    float area, pib;

    printf("Codigo (ex: A01):");
    scanf("%s", codigo);

    printf("Nome:");
    scanf(" %[^\n]", nome);

    printf("Populacao: ");
    scanf("%d", &populacao);

    printf("Area (km²): ");
    scanf("%f", &area);

    printf("PIB (em bilhoes): ");
    scanf("%f", &pib);

    printf("Ponto Turisticos: ");
    scanf(" %[^\n]", pontos_turisticos);

    printf("\n=== Cidade Cadastrada ===\n");
    printf("Código: %s\nNome: %s\nPopulação: %d\nÁrea: %.2f km²\nPIB: %.2f bilhões\nPontos turísticos: %s\n",
        codigo, nome, populacao, area, pib, pontos_turisticos);

    return 0;
}
