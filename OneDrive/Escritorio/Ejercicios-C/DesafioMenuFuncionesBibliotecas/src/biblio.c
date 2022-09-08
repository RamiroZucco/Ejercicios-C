/*
 * biblio.c
 *
 *  Created on: 8 sep. 2022
 *      Author: ramir
 */
#include <stdio.h>
#include <stdlib.h>
int menu()
{
	int retorno;
	printf("a-Iniciar inserte 1\n");
	printf("b-Procesar inserte 2\n");
	printf("c-Finalizar inserte 3\n");
	printf("d-Salir inserte 4\n");
	scanf("%d", &retorno);
	return retorno;
}

