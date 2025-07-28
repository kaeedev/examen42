/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luviso-p <luviso-p@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/22 11:34:58 by luviso-p          #+#    #+#             */
/*   Updated: 2025/07/22 11:47:30 by luviso-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	is_valid_base(int base)
{
	if (base >= 2 && base < 17)
		return (1);
	else
		return (0);
}

int	ft_atoi_base(const char *str, int str_base)
{
	int		i = 0;
	int		n = 0;
	int		sign = 1;
	int		result = 0;
	if (is_valid_base(str_base) == 0) //validamos si la base esta entre 2 y 16
		return (0);
	if (str[i] == '+' || str[i] == '-') //controlamos los signos. Si es negativo convertimos a negativo
	{
		if (str[i] == '-')
			sign *= -1;
		i ++;
	}
	while (str[i] != '\0') //mientras no sea nulo, si es un numero pasalo a int y si es una letra (por los numeros hexadecimales) pasalo a numero
	{
		if (str[i] >= '0' && str[i] <= '9')
			n = str[i] - '0';
		else if (str[i] >= 'A' && str[i] <= 'F')
			n = str[i] - 'A' + 10;
		else if (str[i] >= 'a' && str[i] <= 'f')
			n = str[i] - 'a' + 10;
		i ++;
	}
	if (n <= str_base)
		result = result * str_base + n;
	return (result * sign);
}