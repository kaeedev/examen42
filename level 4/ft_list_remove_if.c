/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_remove_if.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luviso-p <luviso-p@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/14 13:18:39 by luviso-p          #+#    #+#             */
/*   Updated: 2025/07/14 13:31:17 by luviso-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//Escribe una función llamada ft_list_remove_if que elimine la lista pasaada 
//cualquier elemento cuyos datos sean "iguales" a los datos de referencia.
//elimina los nodos de una lista enlazada que contienen un valor de referencia dado.

#include "ft_list.h"
#include <stdlib.h>
//cmp = funcion de comparacion. Devolvera 0 si los datos que apuntan son iguales
void	ft_list_remove_if(t_list **begin_list, void *data_ref, int *cmp())
{
	if (begin_list == NULL || *begin_list == NULL)
		return ;
	t_list *tmp = *begin_list;
	if (cmp(tmp->data, data_ref) == 0) //si el dato del nodo actual coincide con el dato de referencia...
	{
		*begin_list = tmp->next; //el nodo actual apuntara al siguiente
		free(tmp); //liberamos el nodo anterior
		ft_list_remove_if(begin_list, data_ref, cmp); //llamamos de nuevo para revisar el dato del nuevo nodo
	}
	else //si el dato no coincide, este nodo se conserva
	{
		tmp = *begin_list;
		ft_list_remove_if(&tmp->next, data_ref, cmp); //se llama la funcion para el resto de la lista hasta el final
	}
}