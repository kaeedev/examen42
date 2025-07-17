/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rostring.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luviso-p <luviso-p@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/14 14:17:15 by luviso-p          #+#    #+#             */
/*   Updated: 2025/07/14 14:31:38 by luviso-p         ###   ########.fr       */
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
	int	start_first_word;
	int	end_first_word;
	int	flag = 0; //para saber si se imprimio algo antes de la primera palabra

	if (argc >= 2)
	{
		while (argv[1][i] == ' ' || argv[1][i] == '\t') //saltar espacios iniciales
			i ++;
		start_first_word = i; //inicio de la primera palabra
		while (argv[1][i] && argv[1][i] != ' ' && argv[1][i] != '\t' && argv[1][i] != '\0') //encontrar el final de la primera palabra
			i ++;
		end_first_word = i - 1; //final de la primera palabra
		if (argv[1][i] != '\0') //avanzamos el indice si no estamos al final
			i ++;
		while( argv[1][i] != '\0')
		{
			if (argv[1][i] && ((argv[1][i] == ' ' || argv[1][i] == '\t') 
                && (argv[1][i + 1] == ' ' || argv[1][i + 1] == '\t' || !argv[1][i + 1]))) //si el caracter actual es espacio o tab Y el caracter siguiente tambien...
                i++; //avanza sin hacer nada
			else //sino, escribimos
			{
				write(1, &argv[1][i], 1);
				i ++;
				flag = 1; //marcamos que hemos impreso algo
			}
		}
		if (flag) //si flag es 1, imprime un espacio
			write(1, " ", 1);
		while (start_first_word <= end_first_word) //imprime la primera palabra usando los indices start y end
		{
			write(1, &argv[1][start_first_word], 1);
			start_first_word ++;
		}
	}
	write(1, "\n", 1);
	return (0);
}
