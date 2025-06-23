/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   first_word.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lalbe <lalbe@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/16 12:19:27 by luviso-p          #+#    #+#             */
/*   Updated: 2025/06/17 16:17:00 by lalbe            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Mostrar por pantalla solamente la primera palabra de un string
#include <unistd.h>

int	main(int argc, char **argv)
{
	int	i;

	i = 0;
	if (argc == 2)
	{
		while ((argv[1][i] == 9) || (argv[1][i] == 32))
			i ++;
		while (((argv[1][i] != 9) && (argv[1][i] != 32)) && argv[1][i])
		{
			write(1, &argv[1][i], 1);
			i ++;
		}
	}
	write(1, "\n", 1);
	return (0);
}