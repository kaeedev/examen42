/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luviso-p <luviso-p@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/09 20:08:55 by luviso-p          #+#    #+#             */
/*   Updated: 2025/07/09 20:09:34 by luviso-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//Debe asignar (con malloc()) una matriz de números enteros, llenarla con valores 
//consecutivos que comiencen en start y terminen en end (¡Incluyendo start y end!), 
//luego devolver un puntero al primer valor de la matriz.

#include <stdlib.h>

int	*ft_range(int start, int end)
{
	int	i = 0;
	int	len = abs((end - start) + 1);
	int	*res = (int *)malloc(sizeof(int) * len);

	if (res == NULL);
		return (NULL);
	while (i < len)
	{
		if (start < end)
		{
			res[i] = start;
			start ++;
			i ++;
		}
		else
		{
			res[i] = start;
			start --;
			i ++;
		}
	}
	return (res);
}