/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_int_tab.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luviso-p <luviso-p@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/14 14:32:59 by luviso-p          #+#    #+#             */
/*   Updated: 2025/07/14 14:38:56 by luviso-p         ###   ########.fr       */
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
		if (tab[i] > tab[i + 1]) //si el elemento actual es mayor al que el siguiente elmento. Esta desordenado
		{
			tmp = tab[i]; //guardamos el valor de tab en tmp
			tab[i] = tab[i + 1]; //ahora tab vale la siguiente posicion de tab
			tab[i + 1] = tmp; //ahora la siguiente posicion de tab vale tmp q es el valor que tenia tab al principio
			i = 0; //reiniciamos para que el bucle empiece de nuevo
		}
		else //si no esta desordenado, avanza sin hacer nada
			i ++;
	}
}