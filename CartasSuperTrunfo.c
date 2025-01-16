#include <stdio.h>

// Variaveis
typedef struct {
    char estado;                // Letra do estado (A-H)
    char codigo[4];             // Código da carta (ex: A01)
    char nome[100];             // Nome da cidade (uma palavra)
    int populacao;              // População da cidade
    float area;                 // Área da cidade em km²
    float pib;                  // Produto Interno Bruto
    int pontos_turisticos;      // Número de pontos turísticos
} Carta;

int main() {
    int total_cartas = 32; // 8 estados x 4 cidades
    Carta cartas[total_cartas];
    int i;

    printf("Bem-vindo ao sistema de cadastro de cartas do jogo Super Trunfo: Tema Países!\n");
    printf("Você irá cadastrar até %d cartas.\n", total_cartas);

    // Cadastro das cartas
    for (i = 0; i < total_cartas; i++) {
        printf("\n--- Cadastro da carta %d de %d ---\n", i + 1, total_cartas);
        
        printf("Digite o estado (A-H): ");
        scanf(" %c", &cartas[i].estado);
        
        printf("Digite o código da carta (ex: A01): ");
        scanf("%s", cartas[i].codigo);
        
        printf("Digite o nome da cidade (sem espaços): ");
        scanf("%s", cartas[i].nome);
        
        printf("Digite a população da cidade: ");
        scanf("%d", &cartas[i].populacao);
        
        printf("Digite a área da cidade em km²: ");
        scanf("%f", &cartas[i].area);
        
        printf("Digite o PIB da cidade: ");
        scanf("%f", &cartas[i].pib);
        
        printf("Digite o número de pontos turísticos: ");
        scanf("%d", &cartas[i].pontos_turisticos);
        
        printf("Carta cadastrada com sucesso!\n");
    }

    printf("\nCadastro concluído! Você cadastrou todas as cartas.\n");

    return 0;
}

