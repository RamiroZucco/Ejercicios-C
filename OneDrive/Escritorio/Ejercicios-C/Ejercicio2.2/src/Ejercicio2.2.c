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
	int numero;
	int acumuladorPositivos=0;
	int acumuladorNegativos=0;
	int contadorPositivos=0;
	int contadorNegativos=0;
	int minimo;
	int maximo;
	int flag=0;
	int flagDos=0;
	float promedioNeg;
	float promedioPos;
	do
	{
		printf("Ingrese un numero(\"888\"Finaliza el ingreso): ");
		scanf("%d", &numero);
		if(numero==888)
		{
			break;
		}
		else if(numero>0)
		{
			acumuladorPositivos=acumuladorPositivos+numero;
			contadorPositivos++;
			if(flag==0)
			{
				minimo=numero;
				flag=1;
			}
			else if(numero<minimo)
			{
				minimo=numero;
			}
		}
		else if(numero<0)
		{
			acumuladorNegativos=acumuladorNegativos+numero;
			contadorNegativos++;
			if(flagDos==0)
			{
				maximo=numero;
				flagDos=1;
			}
			else if(numero>maximo)
			{
				maximo=numero;
			}
		}
	}
	while(1);
	promedioNeg=(float)acumuladorNegativos/contadorNegativos;
	promedioPos=(float)acumuladorPositivos/contadorPositivos;
	printf("El promedio de los positivos es %f y su minimo es %d",promedioPos,minimo);
	printf("\n El promedio de los negativos es %f y su maximo es %d", promedioNeg, maximo);
	return EXIT_SUCCESS;
}
