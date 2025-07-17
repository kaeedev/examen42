/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luviso-p <luviso-p@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/14 13:38:03 by luviso-p          #+#    #+#             */
/*   Updated: 2025/07/14 13:49:00 by luviso-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_intlen(int n)
{
	int	len;

	len = 0;
	if (n <= 0)
		len = 1;
	while (n != 0)
	{
		n /= 10;
		len++;
	}
	return (len);
}

char	*ft_itoa(int n)
{
	long	nb;
	int		len;
	char	*str;

	len = ft_intlen(n);
	nb = n; //pasar int a long para que el int_min no de desbordamiento
	str = (char *)malloc((len + 1) * sizeof(char)); //reservamos memoria para el string
	if (!str)
		return (NULL);
	str[len--] = '\0'; //colocamos el nulo
	if (nb == 0) //manejar el caso n = 0
		str[0] = '0';
	if (nb < 0) //manejar numeros negativos
	{
		str[0] = '-';
		nb = -nb;
	}
	while (nb > 0) //rellenar el string con los digitos
	{
		str[len--] = (nb % 10) + '0';
		nb /= 10;
	}
	return (str);
}