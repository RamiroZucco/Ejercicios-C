/*
 ============================================================================
 Name        : 3.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
int verificarPar  (int numeroIngresado);
int main(void) {
	setbuf(stdout,NULL);
	int numero;
	int verificar;
	printf("Ingrese numero");
	scanf("%d",&numero);
	verificar=verificarPar(numero);
	printf("La verificacion es %d",verificar);
	return EXIT_SUCCESS;
}
int verificarPar (int numeroIngresado)
{
	if(numeroIngresado%2==0)
	{
		return 1;

	}
	else
	{
		return 0;
	}
}
