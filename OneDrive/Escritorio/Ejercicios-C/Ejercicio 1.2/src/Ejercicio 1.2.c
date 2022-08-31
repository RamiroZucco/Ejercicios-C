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

int main(void) {
	setbuf(stdout,NULL);
		int primerNumero;
		int segundoNumero;
		int tercerNumero;
		int numeroMax;
		printf("Ingrese un numero");
		scanf("%d", &primerNumero);
		printf("Ingrese otro numero");
		scanf("%d", &segundoNumero);
		printf("Ingrese otro numero");
		scanf("%d", &tercerNumero);
		if(primerNumero>segundoNumero && primerNumero>tercerNumero)
		{
			numeroMax=primerNumero;
		}
		else if(segundoNumero>primerNumero && segundoNumero>tercerNumero)
		{
			numeroMax=segundoNumero;
		}
		else
		{
			numeroMax=tercerNumero;
		}
		printf("El numero maximo es: %d", +numeroMax);
	return EXIT_SUCCESS;
}
