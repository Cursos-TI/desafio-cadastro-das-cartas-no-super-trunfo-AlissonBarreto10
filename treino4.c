#include<stdio.h>
#include<stdlib.h>

//Conversao Explicita
int main (){
int a = 10;
int b = 3;
float quociente = (float) a / b; // 'a' é explicitamente convertido para float.

printf ("Quociente %.2f\n", quociente);

system ("pause");
return 0;

//Conversão implicita.
//Ocorre automaticamente quando mistura diferentes tipos de dados em uma unica expressão.

int main()

int a = 10;
float b = 3.5;
float resultado = a / b; // 'a' é convertido implicitamente para float

printf ("Resultado: %f\n", resultado); //Colocar %2.f Não deu digito decimal

system ("pause");
return 0;

}

