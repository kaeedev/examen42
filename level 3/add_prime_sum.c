/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   add_prime_sum.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luviso-p <luviso-p@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/07 14:01:04 by luviso-p          #+#    #+#             */
/*   Updated: 2025/07/07 14:29:01 by luviso-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//Programa que toma un numero entero positivo como argumento y muestre la 
//suma de todos los numeros primos inferiores o iguales a el
#include <unistd.h>

//Para pasar el argumento string a entero
int	ft_atoi(char *str)
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

//Comprobar si es un numero primo o no
int	is_prime(int n)
{
	int	i;
	//porq 1 no es numero primo
	i = 2;
	if (n <= 1)
		return (0);
	while (i * i <= n)
	{
		if (n % i == 0)
			return (0);
		i ++;
	}
	return (1);
}

//Para imprimir el numero por pantalla
void	put_nbr(int n)
{
	char	c;

	if (n >= 10)
		put_nbr(n / 10);
	c = n % 10 + '0';
	write(1, &c, 1);
}

int	main(int argc, char **argv)
{
	if (argc == 2)
	{
		int	n;
		int	sum;

		n = ft_atoi(argv[1]);
		sum = 0;
		while (n > 0) //mientras no sea negativo...
		{
			if (is_prime(n))
				sum += n;
			n --;
		}
		put_nbr(sum);
	}
	else if (argc != 2)
		put_nbr(0);
	write(1, "\n", 1);
	return (0);
}