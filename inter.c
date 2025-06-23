/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   inter.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luviso-p <luviso-p@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/19 13:28:11 by luviso-p          #+#    #+#             */
/*   Updated: 2025/06/19 13:51:11 by luviso-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//Funcion que toma dos strings y devuelve los caracteres que aparecen en ambas
//cadenas en el orden en que aparecen
#include <unistd.h>

int	is_char(char *str, char c)
{
	while (*str)
	{
		if (*str == c)
			return (1);
		str ++;
	}
	return (0);
}

void	inter(char *str1, char *str2)
{
	char	printed[128] = {0}; //Mapa de caracteres para asegurar no imprimir un mismo caracter mas de una vez
	int		i;
	
	while (*str1)
	{
		if (is_char(str2, *str1) && !is_char(printed, *str1))
		{
			write(1, str1, 1);
			printed[i] = *str1;
			i ++;
		}
		str1 ++;
	}
}

int	main(int argc, char **argv)
{
	if (argc == 3)
		inter(argv[1], argv[2]);
	write(1, "\n", 1);
	return (0);
}