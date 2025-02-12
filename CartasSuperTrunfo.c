#include <stdio.h>
#include <string.h>
#include <stdlib.h>

// Estrutura para representar uma carta de Super Trunfo
typedef struct {
    char estado[3]; // Sigla do estado (ex: A, B....)
    char codigocarta[33]; // Código da carta (ex: A01, B03)
    char nomecidade[50]; // Nome da cidade (ex: Sao Paulo, Rio de Janeiro)
    int populacao; // População da cidade
    float area; // Área da cidade em km²
    float pib; // PIB da cidade em dolar americano
    int pontosturisticos; // Número de pontos turísticos da cidade
    float densidadePopulacional; // Densidade populacional calculada
    float pibPerCapita; // PIB per capita calculado
} Carta;

// Função para cadastrar uma nova carta
Carta *cadastrarCarta() {
    // Aloca memória dinamicamente para a carta
    Carta *carta = (Carta *) malloc(sizeof(Carta));

    // Validação da sigla do estado
    do {
        printf("Digite a sigla do estado (A-H): ");
        scanf("%s", carta->estado);
    } while (strlen(carta->estado) != 1 || carta->estado[0] < 'A' || carta->estado[0] > 'H');

    printf("Digite o código da carta: ");
    scanf("%s", carta->codigocarta);
    printf("Digite o nome da cidade: ");
    scanf(" %[^\n]s", carta->nomecidade); // Lê a linha inteira, incluindo espaços
    printf("Digite a população da cidade: ");
    scanf("%d", &carta->populacao);
    printf("Digite a área da cidade em km²: ");
    scanf("%f", &carta->area);
    printf("Digite o PIB da cidade em dólares: ");
    scanf("%f", &carta->pib);
    printf("Digite o número de pontos turísticos da cidade: ");
    scanf("%d", &carta->pontosturisticos);

    // Calcula a densidade populacional e o PIB per capita
    carta->densidadePopulacional = carta->populacao / carta->area;
    carta->pibPerCapita = carta->pib / carta->populacao;

    return carta;
}

// Função para exibir os dados de uma carta
void exibirCarta(Carta *carta) {
    printf("\n--- Dados da Carta ---\n");
    printf("Estado: %s\n", carta->estado);
    printf("Código: %s\n", carta->codigocarta);
    printf("Cidade: %s\n", carta->nomecidade);
    printf("População: %d\n", carta->populacao);
    printf("Área: %.2f km²\n", carta->area);
    printf("PIB: $%.2f\n", carta->pib);
    printf("Pontos Turísticos: %d\n", carta->pontosturisticos);
    printf("Densidade Populacional: %.2f hab/km²\n", carta->densidadePopulacional);
    printf("PIB per Capita: $%.2f\n", carta->pibPerCapita);
}

int main() {
    // Cria um array para armazenar as cartas (8 estados x 4 cidades = 32 cartas)
    Carta *baralho[32];

    // Cadastra as cartas
    for (int i = 0; i < 32; i++) {
        printf("\nCadastre os dados da carta %d:\n", i + 1);
        baralho[i] = cadastrarCarta();
    }

    // Exibe os dados das cartas
    for (int i = 0; i < 32; i++) {
        exibirCarta(baralho[i]);
    }

    // Libera a memória alocada para as cartas
    for (int i = 0; i < 32; i++) {
        free(baralho[i]);
    }

    return 0;
}
