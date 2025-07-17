/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   prime.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luviso-p <luviso-p@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/14 13:31:41 by luviso-p          #+#    #+#             */
/*   Updated: 2025/07/14 13:35:06 by luviso-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*Escriba un programa que tome un int positivo y muestre sus factores primos en la
salida estándar, seguida de una nueva línea.

Los factores deben mostrarse en orden ascendente y separados por '*', de modo que
la expresión en la salida da el resultado correcto.

Si el número de parámetros no es 1, simplemente muestre una nueva línea.*/

#include <stdio.h>  // for printf
#include <stdlib.h> // for atoi

int	main(int argc, char **argv)
{
	int	nb;
	int	div;

	if (argc == 2)
	{
		nb = atoi(argv[1]);
		if (nb == 1)
			printf("1");
		else
		{
			div = 2;
			while (nb > 1)
			{
				if (nb % div == 0)
				{
					printf("%d", div);
					nb /= div;
					if (nb > 1)
						printf("*");
				}
				else
					div ++;
			}
		}
	}
	printf("\n");
	return (0);
}