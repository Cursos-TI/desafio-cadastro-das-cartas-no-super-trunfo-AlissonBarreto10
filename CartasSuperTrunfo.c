#include <windows.h>
#include <locale.h>
#include <stdio.h>
#include <string.h> 

int main() {
system("chcp 65001");
int populacao, pontoturistico;
  char estadoA;
  char codigocarta [50];
  char nomecidade [50];
  float area, pib;
  float densidade1, pib_per_capita1;

  int populacao2, pontoturistico2;
  char estadoB;
  char codigocarta2 [50];
  char nomecidade2 [50];
  float area2, pib2;
  float densidade2, pib_per_capita2;

printf ("Digite a população da carta:\n");
scanf ("%d", &populacao);
getchar();

printf("Digite o Ponto Turistico da carta:\n");
scanf ("%d", &pontoturistico);
getchar();

printf("Digite o Estado da carta:\n");
scanf(" %c", &estadoA);
getchar();

printf("Digite o Código da carta:\n");
fgets(codigocarta, sizeof(codigocarta), stdin);
codigocarta[strcspn(codigocarta, "\n")] = 0;

printf("Digite o Nome da cidade:\n");
fgets(nomecidade, sizeof(nomecidade), stdin);
nomecidade[strcspn(nomecidade, "\n")] = 0;

printf("Digite a Área da cidade:\n");
scanf("%f", &area);
getchar();

printf("Digite o PIB da cidade:\n");
scanf("%f", &pib);
getchar();

printf("Carta 1:\n");
printf("População: %d\n", populacao);
printf("Ponto Turistico: %d\n",pontoturistico);

printf("Estado: %c\n", estadoA);
printf("Código da Carta: %s\n", codigocarta);
printf("Nome Cidade: %s\n", nomecidade);

printf("PIB: %f bilhões de reais\n", pib);
printf("Área: %f km²\n", area);
getchar();

int populacao1;
float area1;
float pib1;
float densidade, pib_per_capita;

//Calculo Carta 1

printf("Digite a população da cidade de SP: \n");
scanf("%d", &populacao);
printf("Digite a Área da cidade (em km²) de SP: \n");
scanf("%f", &area);
printf("Digite o PIB da cidade de SP: \n");
scanf("%f", &pib);

densidade = (float)populacao / area;
pib_per_capita = (pib * 1000000000.0f) / populacao;

printf("Carta 1: Resultados Densidade Populacional e PIB Per Capita\n");
printf("População por área: %d habitantes\n", populacao);
printf("PIB: R$ %.2f bilhões \n", pib);
printf("Densidade Populacional: %.2f hab/km²\n", densidade);
printf("PIB per Capita: %.2f\n", pib_per_capita);

//CARTA 2

printf ("Digite a população da carta:\n");
scanf ("%d", &populacao2);
getchar();

printf("Digite o Ponto Turistico da carta:\n");
scanf ("%d", &pontoturistico2);
getchar();

printf("Digite o Estado da carta:\n");
scanf("%c", &estadoB);
getchar();

printf("Digite o Código da carta:\n");
fgets(codigocarta2, sizeof(codigocarta2), stdin);
codigocarta2[strcspn(nomecidade2, "\n")] = 0;

printf("Digite o Nome da cidade:\n");
fgets(nomecidade2, sizeof(nomecidade2), stdin);
nomecidade2[strcspn(nomecidade2, "\n")] = 0;

printf("Digite a Área da cidade:\n");
scanf("%f", &area2);
getchar();

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

//CALCULO CARTA 2

densidade2 = (float)populacao2 / area2;
pib_per_capita2 = (pib2 * 1000000000.0f) / populacao2;

printf("Digite a população do Estado de RJ: \n");
scanf("%d", &populacao2);
printf("Digite a Área da cidade (em km²) de RJ: \n");
scanf("%f", &area2);
printf("Digite o PIB da cidade de RJ: \n");
scanf("%f", &pib2);

densidade2 = (float)populacao2 / area2;
pib_per_capita2 = pib2 / (float) populacao2;

printf("Carta 2: Resultados Densidade Populacional e PIB Per Capita\n");
printf("População por área: %d habitantes\n", populacao2);
printf("PIB: R$ %.2f bilhões \n", pib2);
printf("Densidade Populacional: %.2f hab/km²\n", densidade2);
printf("PIB per Capita: %.2f\n", pib_per_capita2);

system("pause");
return 0;

}

