#include<stdio.h>
#include<stdlib.h>

int main (){

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

system("pause"); // Espera por qualquer tecla
    return 0;
}