/*
 ============================================================================
 Name        : 1.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
int mostrarNumero  (int numeroIngresado);
int main(void) {
	setbuf(stdout,NULL);
	int numero;
	printf("Ingrese un numero");
	scanf("%d", &numero);
	mostrarNumero(numero);
	return EXIT_SUCCESS;
}
int mostrarNumero (int numeroIngresado)
{
	while(numeroIngresado<0 || numeroIngresado>10)
	{
		printf("Reingrese un numero");
		scanf("%d", &numeroIngresado);
	}
	printf("El numero ingresado es %d",numeroIngresado);
	return numeroIngresado;
}
