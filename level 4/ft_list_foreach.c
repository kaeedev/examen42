/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_foreach.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luviso-p <luviso-p@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/14 13:13:39 by luviso-p          #+#    #+#             */
/*   Updated: 2025/07/14 13:17:52 by luviso-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

//Escriba una función que tome una lista y un puntero de función, y aplique esta
//función para cada elemento de la lista.
void	ft_list_foreach(t_list *begin_list, void(*f)(void *))
{
	while (begin_list)
	{
		(*f)(begin_list->data);
		begin_list = begin_list->next;
	}
}