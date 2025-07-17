/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_list.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luviso-p <luviso-p@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/14 14:39:31 by luviso-p          #+#    #+#             */
/*   Updated: 2025/07/14 14:45:16 by luviso-p         ###   ########.fr       */
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
	int	tmp; //almacena el valor del nodo
	t_list *begin = lst; //almacena el primer nodo de la lista

	while (lst && lst->next) //cuando haya nodos
	{
		if ((*cmp)(lst->data, lst->next->data) == 0) //si no esta en orden
		{
			//(swap)
			tmp = lst->data; //almacenamos el valor del primer nodo
			lst->data = lst->next->data; //ahora el primer nodo vale el valor del siguiente nodo
			lst->next->data = tmp; //el siguiente nodo ahora vale lo que tenia almacenado tmp que es el valor del primer nodo
			lst = begin; //reiniciamos para que el bucle empiece de nuevo
		}
		else //si no esta desordenado, avanza sin hacer nada
			lst = lst->next;
	}
	return (begin); //retorna el primer nodo de la lista
}

//cmp es una funcion que compara dos enteros