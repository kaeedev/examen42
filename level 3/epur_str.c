/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   epur_str.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luviso-p <luviso-p@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/07 14:32:35 by luviso-p          #+#    #+#             */
/*   Updated: 2025/08/21 11:52:13 by luviso-p         ###   ########.fr       */
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
			if (!first && (*str != ' ' && *str != '\t'))
				write(1, " ", 1);
			while (*str && *str != ' ' && *str != '\t')
			{
				write(1, str, 1);
				str ++;
			}
			while (*str == ' ' || *str == '\t')
				str ++;
			first = 0;
		}
	}
	write(1, "\n", 1);
	return (0);
}