#include <stdio.h>
#include <string.h>
#include <stdlib.h> // Para usar o malloc e free

// Definição da estrutura da carta
typedef struct {
    char estado[3]; // Sigla do estado (ex: A, B....)
    char codigocarta[65]; // Código da carta (ex: A01, B03)
    char nomecidade[50]; // Nome da cidade (ex: Sao Paulo, Rio de Janeiro)
    int populacao; // População da cidade
    float area; // Área da cidade em km²
    float pib; // PIB da cidade em dolar americano
    int pontosturisticos; // Número de pontos turísticos da cidade
} Carta;

// Função para criar uma carta
Carta *criarCarta() {
    // Aloca memória para a carta
    Carta *carta = (Carta *)malloc(sizeof(Carta));

    if (carta == NULL) {
        printf("Erro ao alocar memória para a carta.\n");
        exit(1); // Sai do programa com código de erro
    }

    printf("Digite a sigla do estado: ");
    scanf("%s", carta->estado);

    printf("Digite o código da carta: ");
    scanf("%s", carta->codigocarta);

    printf("Digite o nome da cidade: ");
    scanf(" %[^\n]s", carta->nomecidade); // Lê o nome da cidade com espaços

    printf("Digite a população da cidade: ");
    scanf("%d", &carta->populacao);

    printf("Digite a área da cidade em km²: ");
    scanf("%f", &carta->area);

    printf("Digite o PIB da cidade em reais: ");
    scanf("%f", &carta->pib);

    printf("Digite o número de pontos turísticos da cidade: ");
    scanf("%d", &carta->pontosturisticos);

    return carta;
}

// Função para imprimir os dados de uma carta
void imprimirCarta(Carta *carta) {
    printf("\n--- Dados da Carta ---\n");
    printf("Estado: %s\n", carta->estado);
    printf("Código da Carta: %s\n", carta->codigocarta);
    printf("Nome da Cidade: %s\n", carta->nomecidade);
    printf("População: %d\n", carta->populacao);
    printf("Área: %.2f km²\n", carta->area);
    printf("PIB: R$ %.2f\n", carta->pib);
    printf("Pontos Turísticos: %d\n", carta->pontosturisticos);
}

int main() {
    // Cria um array para armazenar várias cartas
    int numCartas = 3; // Número de cartas que você quer criar
    Carta *baralho[numCartas];

    // Cria as cartas e armazena no array
    for (int i = 0; i < numCartas; i++) {
        printf("\n--- Criando Carta %d ---\n", i + 1);
        baralho[i] = criarCarta();
    }

    // Imprime os dados de todas as cartas
    for (int i = 0; i < numCartas; i++) {
        imprimirCarta(baralho[i]);
    }

    // Libera a memória alocada para as cartas
    for (int i = 0; i < numCartas; i++) {
        free(baralho[i]);
    }

    return 0;
}
