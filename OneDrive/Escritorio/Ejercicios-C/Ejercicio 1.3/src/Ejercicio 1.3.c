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
	setbuf(stdout, NULL);
	int primerNumero;
	int segundoNumero;
	int tercerNumero;
	int numeroDelMedio;
	printf("Ingrese un numero");
	scanf("%d", &primerNumero);
	printf("Ingrese otro numero");
	scanf("%d", &segundoNumero);
	printf("Ingrese un ultimo numero");
	scanf("%d", &tercerNumero);
	if(primerNumero>segundoNumero && primerNumero<tercerNumero)
	{
		primerNumero=numeroDelMedio;
	}
	else if (primerNumero<segundoNumero && primerNumero>tercerNumero)
	{
		primerNumero=numeroDelMedio;
	}
	else if(segundoNumero<primerNumero && segundoNumero>tercerNumero)
	{
		segundoNumero=numeroDelMedio;
	}
	else if (segundoNumero>primerNumero && segundoNumero<tercerNumero)
	{
		segundoNumero=numeroDelMedio;
	}
	else if (tercerNumero>primerNumero && tercerNumero<segundoNumero)
	{
		tercerNumero=numeroDelMedio;
	}
	else if(tercerNumero<primerNumero && tercerNumero>segundoNumero)
	{
		tercerNumero=numeroDelMedio;
	}
	else
	{
		printf("No existe numero del medio");
	}
	printf("El numero del medio es: %d", numeroDelMedio);
	return 0;
}
