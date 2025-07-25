/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   putstr.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lalbe <lalbe@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/16 13:36:18 by luviso-p          #+#    #+#             */
/*   Updated: 2025/06/17 16:18:17 by lalbe            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//Escribir un string

#include <unistd.h>

void	putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		write(1, &str[i], 1);
		i ++;
	}
}

int	main(int argc, char **argv)
{
	if (argc == 2)
		putstr(argv[1]);
	write(1, "\n", 1);
	return (0);
}