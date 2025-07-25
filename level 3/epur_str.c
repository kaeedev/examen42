/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   epur_str.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luviso-p <luviso-p@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/07 14:32:35 by luviso-p          #+#    #+#             */
/*   Updated: 2025/07/09 18:43:26 by luviso-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

//Programa que elimina todos los espacios que hayan de mas y solo deja un solo espacio entre
//palabras. EJ: "hola        xd        que tal" -> "hola xd que tal"
int	main(int argc, char **argv)
{
	char	*str;
	int		first;

	str = argv[1];
	first = 1;
	if (argc == 2)
	{
		while (*str == 32 || *str == 9)
			str ++;
		while (*str)
		{
			if (!first && (*str != ' ' && *str != '\t'))  //Si no es la primera palabra y si el caracter actual no es un espacio ni tab...
														// significa que estamos en el inicio de una nueva palabra, por lo que escribimos un espacio
				write(1, " ", 1);
			while (*str && *str != ' ' && *str != '\t') //Escribimos la palabra
			{
				write(1, str, 1);
				str ++;
			}
			while (*str == ' ' || *str == '\t') //Saltar espacios despues de la palabra
				str ++;
			first = 0; //Ya no sera nunca la primera palabra
		}
	}
	write(1, "\n", 1);
	return (0);
}