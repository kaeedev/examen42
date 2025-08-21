/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rostring.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luviso-p <luviso-p@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/14 14:17:15 by luviso-p          #+#    #+#             */
/*   Updated: 2025/08/21 11:48:58 by luviso-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*Escriba un programa que tome una cadena y la muestre después de rotarla
una palabra a la izquierda.

Así, la primera palabra pasa a ser la última y las demás permanecen en el mismo orden.

Una "palabra" se define como parte de una cadena delimitada por espacios/tabulaciones, o
por el inicio/final de la cadena.

Las palabras estarán separadas por un solo espacio en la salida.

Si hay menos de un argumento, el programa muestra \n.*/

#include <unistd.h>

int	main(int argc, char **argv)
{
	int	i = 0;
	int	start;
	int	end;
	int	flag = 0;

	if (argc >= 2)
	{
		while (argv[1][i] == ' ' || argv[1][i] == '\t')
			i ++;
		start = i;
		while (argv[1][i] && argv[1][i] != ' ' && argv[1][i] != '\t' && argv[1][i] != '\0')
			i ++;
		end = i - 1;
		if (argv[1][i] != '\0')
			i ++;
		while( argv[1][i] != '\0')
		{
			if (argv[1][i] && ((argv[1][i] == ' ' || argv[1][i] == '\t') 
                && (argv[1][i + 1] == ' ' || argv[1][i + 1] == '\t' || !argv[1][i + 1])))
                i++;
			else 
			{
				write(1, &argv[1][i], 1);
				i ++;
				flag = 1;
			}
		}
		if (flag)
			write(1, " ", 1);
		while (start <= end)
		{
			write(1, &argv[1][start], 1);
			start ++;
		}
	}
	write(1, "\n", 1);
	return (0);
}
