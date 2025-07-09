/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_size.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luviso-p <luviso-p@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/09 19:54:04 by luviso-p          #+#    #+#             */
/*   Updated: 2025/07/09 20:00:29 by luviso-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

//función que devuelva el número de elementos en la lista vinculada 
//que se pasó a ella.
int	ft_list_size(t_list *begin_list)
{
	int	len;

	len = 0;
	while (begin_list)
	{
		len ++;
		begin_list = begin_list->next;
	}
	return (len);
}