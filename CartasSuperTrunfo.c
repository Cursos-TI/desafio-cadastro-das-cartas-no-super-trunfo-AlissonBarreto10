#include <windows.h>
#include <locale.h>
#include <stdio.h>

int main() {
system("chcp 65001");
int populacao, pontoturistico;
  char estadoA;
  char codigocarta [50];
  char nomecidade [50];
  float area, pib;

printf ("Digite a população da carta:\n");
scanf ("%d", &populacao);

printf("Digite o Ponto Turistico da carta:\n");
scanf ("%d", &pontoturistico);

printf("Digite o Estado da carta:\n");
scanf("%c", &estadoA);

printf("Digite o Código da carta:\n");
fgets(codigocarta, sizeof(codigocarta), stdin);

printf("Digite o Nome da cidade:\n");
fgets(nomecidade, sizeof(nomecidade), stdin);

printf("Digite a Área da cidade:\n");
scanf("%f, &area");

printf("Digite o PIB da cidade:\n");
scanf("%f", &pib);

printf("Carta 1:\n");
printf("População: %d\n", populacao);
printf("Ponto Turistico: %d\n",pontoturistico);

printf("Estado: %c\n", estadoA);
printf("Código da Carta: %s\n", codigocarta);
printf("Nome Cidade: %s\n", nomecidade);

printf("PIB: %f bilhões de reais\n", pib);
printf("Área: %f km²\n", area);
  
  int populacao2, pontoturistico2;
  char estadoB;
  char codigocarta2 [50];
  char nomecidade2 [50];
  float area2, pib2;

printf ("Digite a população da carta:\n");
scanf ("%d", &populacao2);

printf("Digite o Ponto Turistico da carta:\n");
scanf ("%d", &pontoturistico2);

printf("Digite o Estado da carta:\n");
scanf("%c", &estadoB);

printf("Digite o Código da carta:\n");
fgets(codigocarta2, sizeof(codigocarta2), stdin);

printf("Digite o Nome da cidade:\n");
fgets(nomecidade2, sizeof(nomecidade2), stdin);

printf("Digite a Área da cidade:\n");
scanf("%f, &area2");

printf("Digite o PIB da cidade:\n");
scanf("%f", &pib2);

printf("Carta 2:\n");
printf("População: %d\n", populacao2);
printf("Ponto Turistico: %d\n",pontoturistico2);

printf("Estado: %c\n", estadoB);
printf("Código da Carta: %s\n", codigocarta2);
printf("Nome Cidade: %s\n", nomecidade2);

printf("PIB: %f bilhões de reais\n", pib2);
printf("Área: %f km²\n", area2);

}

