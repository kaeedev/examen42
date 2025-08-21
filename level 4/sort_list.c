/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_list.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luviso-p <luviso-p@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/14 14:39:31 by luviso-p          #+#    #+#             */
/*   Updated: 2025/08/21 11:51:34 by luviso-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*Escribe las siguientes funciones:

t_list *sort_list(t_list* lst, int (*cmp)(int, int));

Esta función debe ordenar la lista dada como parámetro, usando la función
puntero cmp para seleccionar el orden a aplicar y devuelve un puntero al
primer elemento de la lista ordenada.

Las duplicaciones deben permanecer.

Las entradas siempre serán consistentes.

Debes utilizar el tipo t_list descrito en el archivo list.h
que se te proporciona. Debes incluir ese archivo.
(#include "list.h"), pero no debes entregarlo. Usaremos nuestro propio
para compilar su tarea.

Las funciones pasadas como cmp siempre devolverán un valor diferente de
0 si a y b están en el orden correcto, 0 en caso contrario.*/

#include "ft_list.h"

t_list *sort_list(t_list *lst, int (*cmp)(int, int))
{
	int	tmp;
	t_list *begin = lst;

	while (lst && lst->next)
	{
		if ((*cmp)(lst->data, lst->next->data) == 0)
		{
			tmp = lst->data;
			lst->data = lst->next->data;
			lst->next->data = tmp;
			lst = begin;
		}
		else
			lst = lst->next;
	}
	return (begin);
}

//cmp es una funcion que compara dos enteros