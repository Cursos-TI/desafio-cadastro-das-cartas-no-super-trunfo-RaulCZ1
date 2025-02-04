#include <stdio.h>
int main(){

char estado;
char codigo_carta[30];
char nomecidade[5];
int populacao;
float area;
float pib;
int pontosturisticos;

printf("Digite o Estado:\n");
scanf("%c", &estado);

printf("Digite o Código da carta:\n");
scanf("%c", &codigo_carta);

printf("Digite o Nome da Cidade:\n");
scanf("%c", &nomecidade);

printf("Digite a População:\n");
scanf("%d", &populacao);

printf("Digitea Área:\n");
scanf("%f", &area);

printf("Digite o PIB:\n");
scanf("%f", &pib);

printf("Digite o numero de pontos turísticos:\n");
scanf("%d", &pontosturisticos);

printf("Estado: %c\n", estado);
printf("Código da carta: %c\n", codigo_carta);
printf("Nome da Cidade: %c\n", nomecidade);
printf("População: %d\n", populacao);
printf("Área: %f\n", area);
printf("PIB: %f\n", pib);
printf("Número de pontos Tutísticos: %d\n", pontosturisticos);







    return 0;
}
