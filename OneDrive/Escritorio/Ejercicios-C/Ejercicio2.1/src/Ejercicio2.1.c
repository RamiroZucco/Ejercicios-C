
#include <stdio.h>
#include <stdlib.h>

int main(void) {
	setbuf(stdout,NULL);
	int i;
	int numero;
	int acumulador=0;
	int contador=0;
	float promedio;
	for(i=0;i<7;i++)
	{
		printf("Ingresar numero");
		scanf("%d",&numero);
		while(numero>=0)
		{
			printf("Reingrese numero");
			scanf("%d", &numero);
		}
		acumulador=acumulador+numero;
		contador=contador+1;
	}
	promedio=(float)acumulador/contador;
	printf("El promedio es %f", promedio);
	return EXIT_SUCCESS;
}
