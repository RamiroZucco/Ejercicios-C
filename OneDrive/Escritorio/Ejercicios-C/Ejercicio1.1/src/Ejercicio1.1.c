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

int main(void) {

	setbuf(stdout,NULL);
	int primerNumero;
	int segundoNumero;
	int suma;
	printf("Ingrese un numero");
	scanf("%d", &primerNumero);
	while(primerNumero<-50 || primerNumero>100)
	{
		printf("Reingrese numero");
		scanf("%d", &primerNumero);
	}
	printf("Ingrese otro numero");
	scanf("%d", &segundoNumero);
	while(segundoNumero<-50 || segundoNumero>100)
	{
		printf("Reingrese numero");
		scanf("%d", &segundoNumero);
	}
	suma=primerNumero+segundoNumero;
	printf("La suma entre %d y %d da como resultado %d", primerNumero, segundoNumero, suma);
	return EXIT_SUCCESS;
}
