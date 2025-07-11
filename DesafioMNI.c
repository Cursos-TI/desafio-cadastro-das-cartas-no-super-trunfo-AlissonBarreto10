// DESAFIO NOVO
#include <time.h>
#include<stdio.h>
#include<stdlib.h>

int main() {
    int numeroJogador, numeroComputador, resultado;
    char tipoComparacao;

//Gerar numero aleatorio
srand(time(0));
numeroComputador = rand() % 100 + 1; // Numero entre 1 e 100

//Inicio do jogo

printf("Bem vindo ao jogo Maior, Menor ou Igual!\n");
printf("Você deve escolher um número e o tipo de comparação. \n");
printf("M. Maior\n");
printf("N. Menor\n");
printf("I. Igual\n");

printf("Escolha a comparação: ");
scanf("%c", &tipoComparacao);

printf("Digite seu número (entre 1 e 100): ");
scanf("%d", &numeroJogador);

//Exibir número do computador
printf("O número do computador é %d\n", numeroComputador);

switch (tipoComparacao)
{
case 'M':
case 'm':
    printf("Você escolheu a opção maior, será que está com sorte?\n");
    resultado = numeroJogador > numeroComputador ? 1 : 0;
    break;
case 'N':
case 'n':
    printf("Você escolheu a opção menor, sei não em?\n");
   resultado = numeroJogador < numeroComputador ? 1 : 0;
    break;
case 'I':
case 'i':
    printf("Você escolheu a opção igual, acho que vai dar bom?\n");
    resultado = numeroJogador == numeroComputador ? 1 : 0;
    break;
default:
    printf("Opção de jogo inválida\n");
    break;
}

if (resultado == 1)
{
    printf("Você venceu campeeaooooo!!\n");
}   else {
    printf("Você perdeu, affff!!\n");
}

system("pause");

return 0;

}
