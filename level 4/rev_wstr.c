/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rev_wstr.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luviso-p <luviso-p@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/14 14:01:32 by luviso-p          #+#    #+#             */
/*   Updated: 2025/08/21 11:47:08 by luviso-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*Escriba un programa que tome una cadena como parámetro e imprima sus palabras en
orden inverso.

Una "palabra" es una parte de la cadena delimitada por espacios y/o tabulaciones, o la
inicio/final de la cadena.

Si el número de parámetros es diferente de 1, el programa mostrará
'\norte'.

En los parámetros que se van a probar no habrá ningún parámetro "adicional"
espacios (lo que significa que no habrá espacios adicionales al principio o al final).
al final de la cadena, y las palabras siempre estarán separadas exactamente por un espacio.*/

#include <unistd.h> //write

int	main(int argc, char **argv)
{
	int	start;
	int	end;
	int i = 0;

	if (argc == 2)
	{
		while(argv[1][i] != '\0')
			i ++;
		while(i >= 0)
		{
			while (argv[1][i] == '\0' || argv[1][i] == ' ' || argv[1][i] == '\t')
				i --;
			end = i; //final de la palabra
			while (argv[1][i] && argv[1][i] != ' ' && argv[1][i] != '\t')
				i --;
			start = i + 1;
			int	flag;
			flag = start;
			while (start <= end)
			{
				write (1, &argv[1][start], 1);
				start ++;
			}
			if (flag != 0)
				write (1, " ", 1);
		}
	}
	write(1, "\n", 1);
	return (0);
}