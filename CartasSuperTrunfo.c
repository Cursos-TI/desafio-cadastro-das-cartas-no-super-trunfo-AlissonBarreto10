#include <windows.h>
#include <locale.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main() {
  
    system("chcp 65001");
    setlocale(LC_ALL, "Portuguese");

    // Variáveis Carta 1 
    char nomecidade1[50];
    int populacao1;
    float area1;
    float pib1;
    float densidade1;
    float pib_per_capita1;

    // Variáveis Carta 2
    char nomecidade2[50];
    int populacao2;
    float area2;
    float pib2;
    float densidade2;
    float pib_per_capita2;

    // CARTA 1
    printf("DADOS DA CARTA 1\n");
    printf("Digite o Nome da cidade: ");
    fgets(nomecidade1, sizeof(nomecidade1), stdin);
    nomecidade1[strcspn(nomecidade1, "\n")] = 0; 

    printf("Digite a População: ");
    scanf("%d", &populacao1);

    printf("Digite a Área (em km²): ");
    scanf("%f", &area1);

    printf("Digite o PIB (em bilhões): ");
    scanf("%f", &pib1);
    getchar();

    // Cálculos da Carta 1
    densidade1 = (float)populacao1 / area1;
    pib_per_capita1 = (pib1 * 1000000000.0f) / populacao1;

    // CARTA 2
    printf("DADOS DA CARTA 2\n");
    printf("Digite o Nome da cidade: ");
    fgets(nomecidade2, sizeof(nomecidade2), stdin);
    nomecidade2[strcspn(nomecidade2, "\n")] = 0;

    printf("Digite a População: ");
    scanf("%d", &populacao2);

    printf("Digite a Área (em km²): ");
    scanf("%f", &area2);

    printf("Digite o PIB (em bilhões): ");
    scanf("%f", &pib2);
    getchar();

    // Cálculos da Carta 2
    densidade2 = (float)populacao2 / area2;
    pib_per_capita2 = (pib2 * 1000000000.0f) / populacao2;

    // Cartas parte 1 e 2 desafio
    printf("CARTAS PRONTAS PARA O JOGO\n");
    printf("---------------------------------------\n");
    printf("CARTA 1: %s\n", nomecidade1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: R$ %.2f bilhões\n", pib1);
    printf("Densidade: %.2f hab/km²\n", densidade1);
    printf("PIB per Capita: R$ %.2f\n", pib_per_capita1);
    printf("---------------------------------------\n");
    printf("CARTA 2: %s\n", nomecidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: R$ %.2f bilhões\n", pib2);
    printf("Densidade: %.2f hab/km²\n", densidade2);
    printf("PIB per Capita: R$ %.2f\n", pib_per_capita2);
    printf("---------------------------------------\n\n");

    // COMPARAÇÃO DE CARTAS
  
    int escolha1 = 0;
    float valorAtributo1_Carta1 = 0, valorAtributo1_Carta2 = 0;

    printf("Escolha o primeiro atributo e vamos lá!\n");
    printf("1.População\n");
    printf("2. Área\n");
    printf("3. PIB\n");
    printf("4. Densidade Populacional \n");
    printf("5. PIB per Capita \n");
    printf("Digite sua escolha entre 1 a 5): ");
    scanf("%d", &escolha1);

    switch (escolha1) {
      case 1:
      printf("Você escolheu População.\n");
      valorAtributo1_Carta1 = (float)populacao1;
      valorAtributo1_Carta2 = (float)populacao2;
      break;

      case 2:
      printf("Você escolheu Área.\n");
      valorAtributo1_Carta1 = area1;
      valorAtributo1_Carta2 = area2;
      break;

      case 3:
      printf("Você escolheu PIB.\n");
      valorAtributo1_Carta1 = pib1;
      valorAtributo1_Carta2 = pib2;
      break;

      case 4:
      printf("Você escolheu Densidade Populacional.\n");
      valorAtributo1_Carta1 = densidade1;
      valorAtributo1_Carta2 = densidade2;
      break;
      
      case 5:
      printf("Você escolheu PIB Per Capita.\n");
      valorAtributo1_Carta1 = pib_per_capita1;
      valorAtributo1_Carta2 = pib_per_capita2;

    break;
    default:
    printf("Você errou :(\n");
    system("pause");
    return 1;
    }
    
    int escolha2 = 0;
    float valorAtributo2_Carta1 = 0, valorAtributo2_Carta2 = 0;

    printf("Escolha o segundo atributo para comparar\n");

   if (escolha1 != 1) printf ("1. População\n");
   if (escolha1 != 2) printf ("2. Área\n");
   if (escolha1 != 3) printf ("3. PIB\n");
   if (escolha1 != 4) printf ("4. Densidade Populacional\n");
   if (escolha1 != 5) printf ("5. PIB per Capita\n");
   scanf("%d", &escolha2);

   if (escolha2 == escolha1) {
    printf ("Você não pode escolher o mesmo atributo duas vezes meu amigo!! Vou encerrar o game. \n");
   system ("pause");
    return 1;
   }
   switch (escolha2){
    
    case 1:
    printf("Você escolheu População.\n");
    valorAtributo2_Carta1 = (float)populacao1;
    valorAtributo2_Carta2 = (float)populacao2;
    break;

    case 2:
    printf("Você escolheu Área.\n");
    valorAtributo2_Carta1 = area1;
    valorAtributo2_Carta2 = area2;
    break;

    case 3:
    printf("Você escolheu PIB.\n");
    valorAtributo2_Carta1 = pib1;
    valorAtributo2_Carta2 = pib2;
    break;
    
    case 4:
    printf("Você escolheu Densidade Populacional.\n");
    valorAtributo2_Carta1 = densidade1;
    valorAtributo2_Carta2 = densidade2;
    break;

    case 5:
    printf("Você escolheu PIB per Capita.\n");
    valorAtributo2_Carta1 = pib_per_capita1;
    valorAtributo2_Carta2 = pib_per_capita2;
    break;
    default:
    printf("Você errou :(\n");
    system("pause");
    return 1;
   }
    float somaCarta1, somaCarta2;
    somaCarta1 = valorAtributo1_Carta1 + valorAtributo1_Carta1;
    somaCarta2 = valorAtributo1_Carta2 + valorAtributo1_Carta2;

    printf("Resultado da Rodada\n");
    printf("Comparando %s vs %s\n", nomecidade1, nomecidade2);

    printf("Atributo 1: %.2f (%s) vs %.2f (%s)\n", valorAtributo1_Carta1, nomecidade1, valorAtributo1_Carta2, nomecidade2);
    printf("Atributo 2: %.2f (%s) vs %.2f (%s)\n", valorAtributo1_Carta1, nomecidade1, valorAtributo1_Carta2, nomecidade2);
    
    printf("Soma dos Atributos para %s: %.2f\n", nomecidade1, somaCarta1);
    printf("Soma dos Atributos para %s: %.2f\n", nomecidade2, somaCarta2);

    if (somaCarta1 > somaCarta2) {
      printf("VENCEDOR UHUUU: %s! \n", nomecidade1);
    } else if (somaCarta2 > somaCarta1) {
      printf("VENCEDOR IHAAA: %s!\n", nomecidade2);
    } else {
      printf("EMPATOU RAPAZ!!\n");
    }
    
system("pause");
    return 0;

  }
  
  
  
