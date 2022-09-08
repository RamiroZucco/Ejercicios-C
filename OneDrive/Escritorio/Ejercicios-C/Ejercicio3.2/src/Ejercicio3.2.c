/*
 ============================================================================
 Name        : 2.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
float mostrarNumero (float numeroIngresado);
int main(void) {
	setbuf(stdout,NULL);
	float numero;
	mostrarNumero(numero);
	scanf("%f", &numero);
	return 0;
}
float mostrarNumero (float numeroIngresado)
{
	printf("Ingrese un numero");
	scanf("%f", &numeroIngresado);
	while(numeroIngresado<0 || numeroIngresado>10)
	{
		printf("Reingrese un numero");
		scanf("%f", &numeroIngresado);
	}
	printf("El numero ingresado es %f",numeroIngresado);
	return numeroIngresado;
}
