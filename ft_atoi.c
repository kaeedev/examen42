/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luviso-p <luviso-p@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/18 11:29:07 by luviso-p          #+#    #+#             */
/*   Updated: 2025/06/18 11:41:17 by luviso-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//Hacer un atoi. Pasar de char a int. Debemos controlar espacios
// y caracteres del 9 al 13 ASCII, negativos, ambos signos y si es
// un numero
#include <unistd.h>

int	ft_atoi(const char *str)
{
	int	result;
	int	sign;

	result = 0;
	sign = 1;
	while (*str == 32 || (*str >= 9 && *str <= 13))
		str ++;
	if (*str == '-')
		sign = -1;
	if (*str == '-' || *str == '+')
		str ++;
	while (*str >= '0' && *str <= '9')
	{
		result = result * 10 + *str - '0';
		str ++;
	}
	return (sign * result);
}