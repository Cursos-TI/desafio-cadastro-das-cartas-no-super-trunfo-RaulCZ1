#include <stdio.h>

int main() {
    // Dados da Carta 1
    char estado1;            // Sigla do estado (ex: de 'A' a 'H'.)
    char codigocarta1[33];   // Código da carta (ex: A01, B03)
    char nomecidade1[50];    // Nome da cidade (ex: Sao Paulo, Nova York)
    int populacao1;          // População da cidade
    float area1;             // Área da cidade em km²
    float pib1;              // PIB
    int pontosturisticos1;   // Numero de pontos Turisticos

    // Dados da Carta 2
    char estado2;
    char codigocarta2[33];
    char nomecidade2[50];
    int populacao2;
    float area2;
    float pib2;
    int pontosturisticos2;

    // Leitura dos dados da Carta 1
    printf("Digite os dados da Carta 1:\n");
    printf("Digite o Estado (A-H):\n");
    scanf(" %c", &estado1);
    printf("Digite o Codigo da Carta (01 a 04):\n");   //Digitar a letra do estado seguida do numero ( ex: A01, B04..)
    scanf("%s", codigocarta1);
    printf("Digite o Nome da Cidade:\n");
    scanf(" %[^\n]s", nomecidade1);
    printf("Digite a Populacao:\n");
    scanf("%d", &populacao1);
    printf("Digite a Area:\n");
    scanf("%f", &area1);
    printf("Digite o PIB:\n");
    scanf("%f", &pib1);
    printf("Digite o Numero de Pontos Turisticos:\n");
    scanf("%d", &pontosturisticos1);

    // Leitura dos dados da Carta 2
    printf("\nDigite os dados da Carta 2:\n");
    printf("Digite o Estado (A-H):\n");
    scanf(" %c", &estado2);
    printf("Digite o Codigo da Carta (01 a 04):\n");
    scanf("%s", codigocarta2);
    printf("Digite o Nome da Cidade:\n");
    scanf(" %[^\n]s", nomecidade2);
    printf("Digite a Populacao:\n");
    scanf("%d", &populacao2);
    printf("Digite a Area:\n");
    scanf("%f", &area2);
    printf("Digite o PIB:\n");
    scanf("%f", &pib2);
    printf("Digite o Numero de Pontos Turisticos:\n");
    scanf("%d", &pontosturisticos2);

    // Exibição dos dados da Carta 1
    printf("\nCarta 1:\n");
    printf("Estado: %c\n", estado1);
    printf("Codigo: %s\n", codigocarta1);
    printf("Nome da Cidade: %s\n", nomecidade1);
    printf("Populacao: %d\n", populacao1);
    printf("Area: %.2f km²\n", area1);
    printf("PIB: %.2f bilhoes de reais\n", pib1);
    printf("Numero de Pontos Turisticos: %d\n", pontosturisticos1);

    // Exibição dos dados da Carta 2
    printf("\nCarta 2:\n");
    printf("Estado: %c\n", estado2);
    printf("Codigo: %s\n", codigocarta2);
    printf("Nome da Cidade: %s\n", nomecidade2);
    printf("Populacao: %d\n", populacao2);
    printf("Area: %.2f km²\n", area2);
    printf("PIB: %.2f bilhoes de reais\n", pib2);
    printf("Numero de Pontos Turisticos: %d\n", pontosturisticos2);

    return 0;
}



    return 0;
}
