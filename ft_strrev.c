/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luviso-p <luviso-p@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/19 11:19:20 by luviso-p          #+#    #+#             */
/*   Updated: 2025/06/19 11:30:59 by luviso-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
//Funcion que invierte una cadena de texto. Modifica la cadena original
char	*ft_strrev(char *str)
{
	char	tmp;
	int		len;
	int		i;

	i = 0;
	len = 0;
	while (str[len])
		len ++;
	while (i < (len / 2))
	{
		tmp = str[i];
		str[i] = str[len - 1 - i];
		str[len - 1 - i] = tmp;
		i ++;
	}
	return (str);
}

int	main(int argc, char **argv)
{
	if (argc == 2)
		printf("%s\n", ft_strrev(argv[1]));
	return (0);
}