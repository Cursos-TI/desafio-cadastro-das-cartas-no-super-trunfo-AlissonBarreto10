#include <stdio.h>
#include <stdlib.h>
int main(){

int numero1, numero2;
int soma, subtracao, multiplicacao;
float divisao;

printf ("Entre com o numero 1: \n");
scanf("%d", &numero1);
printf ("Entre com o numero 2: \n");
scanf ("%d", &numero2);

// operação soma
soma = numero1 + numero2;

// operação subtração
subtracao = numero1 - numero2;

// operação multiplicação
multiplicacao = numero1 * numero2;

// operação divisão
divisao = (float)numero1 / numero2;

printf("A Soma é: %d \n", soma);
printf("A Subtração é: %d \n", subtracao);
printf("A Multiplicação é: %d \n", multiplicacao);
printf("A Divisão é: %f \n", divisao);   

system("pause"); // Espera por qualquer tecla
    return 0;

    //Treino 2

    int numero1, numero2, resultado;

resultado = 10;
printf("Resultado %d\n, resultado");

//resultado = resultado + 20;

resultado += 20;
printf("Resultado %d\n", resultado);

//resultado = resultado - numero1;
resultado -= numero1;
printf("Resultado %d\n", resultado);

//resultado = resultado * 5;
resultado *= 5;
printf("Resultado %d\n", resultado);

//resultado = resultado / 2;
resultado /= 2;
printf("Resultado %d\n", resultado);

// Treino 3

int numero1 = 1;

printf ("Antes incremento %d \n", numero1);
//numero1 - numero1 +1;
//numero1 += 1;
numero1++;
printf("Após incremento: %d \n", numero1);

//numero1 - numero1 - 1;
//numero1 -= 1;
numero1 --;
printf ("Após decremento %d\n",numero1);

//Treino 4

//Conversao Explicita
int a = 10;
int b = 3;
float quociente = (float) a / b; // 'a' é explicitamente convertido para float.

printf ("Quociente %.2f\n", quociente);

//Conversão implicita.
//Ocorre automaticamente quando mistura diferentes tipos de dados em uma unica expressão.

int a = 10;
float b = 3.5;
float resultado = a / b; // 'a' é convertido implicitamente para float

printf ("Resultado: %f\n", resultado); //Colocar %2.f Não deu digito decimal

int numero = 4000000000;

//Treino 5
//Long int não compila, refazer formato long long int dois L porcentual

printf ("Número positivo grande: %lu\n", numeroGrandePositivo);
printf ("Número positivo: %u\n", numeroPositivo);
printf("Número grande: %ld\n", numeroGrande);
printf("Número: %d\n", numero);

return 0;

//Short - variavel inteira, que ocupa menos memoria e o valor está dentro do permitido.

short int numeroPequeno = 32767; // Valor máximo de short int
printf("Número pequeno (short int): %d\n", numeropequeno );

numeroPequeno = 32768; // Valor maior que o máximo de short int
printf ("Numero pequeno atualizado (short int): %d"\n, numeroPequeno);

//printf ("\n*** Tamanho das variáveis ***\n");
//printf ("Short int: %lu B - int: %lu B - long int: %lu B\n", sizeof(short int), sizeof(int), sizeof(long long int);
//printf("float: %lu B - Double: %lu B - long double: %lu B\n", sizeof (float), sizeof (double), sizeof(long double);

//TREINO 6

// > maior que
// < menor que
// >= maior ou igual a
// <= menor ou igual a
// == igual a
// != diferente de 

int a = a;
int b = 20;

printf ("a > b: %d\n", a > b);
printf ("a < b: %d\n", a < b);
printf ("a == b: %d\n", a == b);
printf ("a != b: %d\n", a != b);

//Variaveis de tipos diferentes

int x = 5;
float y = 5.0;
//char  c = 'a';

printf("x >= y: %d\n", x >= y);
printf("x == y: %d\n", x == y);
printf("x != y: %d\n", x != y);

//printf("x >= c: %d\n", x >= c);
//printf("O valor ASCII de %c é %d: \n", c, c);

//Conversão explicita de tipos (casting)

float numero 1 = 10.2; //quando coloco (int) em numero1, descarta os numeros decimais
int numero2 = 10;

printf("numero1 > numero2: %d\n", numero1 > numero2);
printf("numero 1 == numero2: %d\n", numero 1 == numero2);

}