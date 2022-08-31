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

int main(void) {
	setbuf(stdout,NULL);
	int primerNumero;
	int segundoNumero;
	int tercerNumero;
	int numeroMedio;
	printf("Ingrese un numero");
	scanf("%d", &primerNumero);
	printf("Ingrese otro numero");
	scanf("%d", &segundoNumero);
	printf("Ingrese otro numero");
	scanf("%d", &tercerNumero);
	if((primerNumero>segundoNumero && primerNumero<tercerNumero)||(primerNumero<segundoNumero && primerNumero>tercerNumero))
	{
		numeroMedio=primerNumero;
		printf("El numero del medio es %d", numeroMedio);
	}
	else if((segundoNumero>primerNumero && segundoNumero<tercerNumero)||(segundoNumero<primerNumero && segundoNumero>tercerNumero))
	{
		numeroMedio=segundoNumero;
		printf("El numero del medio es %d", numeroMedio);
	}
	else if((tercerNumero<primerNumero && tercerNumero>segundoNumero)||(tercerNumero>primerNumero && tercerNumero<segundoNumero))
	{
		numeroMedio=tercerNumero;
		printf("El numero del medio es %d", numeroMedio);
	}
	else
	{
		printf("no hay numero del medio");
	}
	return EXIT_SUCCESS;
}
