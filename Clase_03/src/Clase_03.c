/*
 ============================================================================
 Name        : Clase_03.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

#define CANT_ITERA 5

int calcularMinimoMaximo(int cantidadNumeros, int *resultadoMaximo, int *resultadoMinimo);

int main(void)
{
	int resultadoMaximo;
	int resultadoMinimo;
	if(calcularMinimoMaximo(CANT_ITERA,&resultadoMaximo,&resultadoMinimo)== 0)
	{
		printf("El resultado maximo es %d y el resultado Minimo es %d",resultadoMaximo,resultadoMinimo);
	}
	return 0;
}

int calcularMinimoMaximo(int cantidadNumeros, int *resultadoMaximo, int *resultadoMinimo)
{
	int numero;
	int i;
	int maximo;
	int minimo;
	int retorno = -1;
	if(cantidadNumeros>0 && *resultadoMaximo != NULL && *resultadoMinimo != NULL)
	{
		for(i=0;i< cantidadNumeros;i++)
		{
			printf("ingrese un numero; \n");
			scanf("%d",&numero);
			if(i==0 || numero > maximo)
			{
				maximo=numero;
			}
			if(i==0 || numero < minimo)
			{
				minimo=numero;
			}
		}
		*resultadoMaximo = maximo;
		*resultadoMinimo = minimo;
		retorno = 0;
	}
	return retorno;
}







