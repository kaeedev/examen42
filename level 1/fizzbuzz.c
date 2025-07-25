/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fizzbuzz.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luviso-p <luviso-p@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/16 12:40:09 by luviso-p          #+#    #+#             */
/*   Updated: 2025/06/25 10:36:05 by luviso-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//Mostrar los numeros del 1 al 100 y si son multiplos de 3 escribir fizz, de 5 buzz y de ambos fizzbuzz
#include <unistd.h>

void	write_numbers(int n)
{
	char	c;

	if (n >= 10)
		write_numbers(n / 10);
	c = n % 10 + '0';
	write(1, &c, 1);
}

int	main(void)
{
	int	i;

	i = 1;
	while (i <= 100)
	{
		if ((i % 3 == 0) && (i % 5 == 0))
			write(1, "fizzbuzz", 8);
		else if (i % 5 == 0)
			write(1, "buzz", 4);
		else if (i % 3 == 0)
			write(1, "fizz", 4);
		else
			write_numbers(i);
		i ++;
		write(1, "\n", 1);
	}
	return (0);
}