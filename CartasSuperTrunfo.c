#include <stdio.h>
int main(){

char estado;
char codigocarta[50];
char nomecidade[50];
int populacao;
float area;
float pib;
int pontosturisticos;

printf("Digite o Estado:\n");
scanf("%c", &estado);

printf("Digite o Código da carta:\n");
scanf("%s", &codigocarta);

printf("Digite o Nome da Cidade:\n");
scanf("%s", &nomecidade);

printf("Digite a População:\n");
scanf("%d", &populacao);

printf("Digitea Área:\n");
scanf("%f", &area);

printf("Digite o PIB:\n");
scanf("%f", &pib);

printf("Digite o numero de pontos turísticos:\n");
scanf("%d", &pontosturisticos);

printf("Estado: %c\n", estado);
printf("Código da carta: %s\n", codigocarta);
printf("Nome da Cidade: %s\n", nomecidade);
printf("População: %d\n", populacao);
printf("Área: %f Km²\n", area);
printf("PIB: %f bilhões de reais\n", pib);
printf("Número de pontos Tutísticos: %d\n", pontosturisticos);


    return 0;
}
