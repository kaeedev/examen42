/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_int_tab.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luviso-p <luviso-p@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/14 14:32:59 by luviso-p          #+#    #+#             */
/*   Updated: 2025/08/21 11:50:23 by luviso-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*Escribe la siguiente función:

void sort_int_tab(int *tab, unsigned int size);

Debe ordenar (en el lugar) la matriz int 'tab', que contiene exactamente 'tamaño'
miembros, en orden ascendente.

Hay que conservar los dobles.*/

void	sort_int_tab(int *tab, unsigned int size)
{
	unsigned int i = 0;
	int tmp;

	while (i < (size - 1))
	{
		if (tab[i] > tab[i + 1])
		{
			tmp = tab[i];
			tab[i] = tab[i + 1];
			tab[i + 1] = tmp;
			i = 0;
		}
		else
			i ++;
	}
}