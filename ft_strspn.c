/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strspn.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luviso-p <luviso-p@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/19 11:41:20 by luviso-p          #+#    #+#             */
/*   Updated: 2025/06/19 11:56:34 by luviso-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//Funcion que calcula la longitud de un string, pero solo los caracteres 
//presentes en accept
#include <stddef.h>
#include <stdio.h>

size_t	ft_strspn(const char *s, const char *accept)
{
	size_t	i;
	size_t	result;
	int		j;

	i = 0;
	result = 0;
	while (s[i])
	{
		j = 0;
		while (accept[j])
		{
			if (s[i] == accept[j])
			{
				result ++;
				break ;
			}
			j ++;
		}
		if (!accept)
			break ;
		i ++;
	}
	return (result);
}

int	main(int argc, char **argv)
{
	if (argc == 3)
	{
		printf("Numero de coincidencias: %zu\n", ft_strspn(argv[1], argv[2]));
	}
	return (0);
}