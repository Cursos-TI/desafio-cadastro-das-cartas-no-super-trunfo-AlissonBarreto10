#include <stdio.h>
#include <stdlib.h>

int main(){

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

system("pause"); // Espera por qualquer tecla
    return 0;
}