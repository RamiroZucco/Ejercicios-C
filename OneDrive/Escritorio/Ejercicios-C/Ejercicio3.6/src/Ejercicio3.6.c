/*
 ============================================================================
 Name        : 6.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
int realizarDescuento(int numero);

int main(void) {
	setbuf(stdout,NULL);
	int variable1;
	int variableConDescuento;
	printf("Ingrese un numero");
	scanf("%d", &variable1);
	while(variable1<10 || variable1>100)
	{
		printf("Reingrese numero");
		scanf("%d", &variable1);
	}
	variableConDescuento= realizarDescuento(variable1);
	printf("El numero con descuento es %d",variableConDescuento);
	return EXIT_SUCCESS;
}
int realizarDescuento(int numero)
{
	int descuento;
	descuento= numero*5/100;
	return descuento;
}

