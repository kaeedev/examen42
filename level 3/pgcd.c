/*Escriba un programa que tome dos cadenas que representen dos numeros positivos,
números enteros que caben en un int.

Muestra su máximo común denominador seguido de una nueva línea (siempre es un
entero positivo).

Si el número de parámetros no es 2, muestre una nueva línea.*/

#include <stdlib.h> //atoi
#include <stdio.h> //printf

int	pgcd(int a, int b)
{
	int	i;
	int	pgcd;

	i = 1;
	pgcd = 1; //variable para almacenar el mayor comun divisor
	while (i <= a && i <= b)
	{
		if (a % i == 0 && b % i == 0)
			pgcd = i;
		i ++;
	}
	return (pgcd);
}

int	main(int argc, char **argv)
{
	int a;
	int b;

	if (argc == 3)
	{
		a = atoi(argv[1]);
		b = atoi(argv[2]);
		printf("%d\n", pgcd(a, b));
	}
	return ( 0);
}