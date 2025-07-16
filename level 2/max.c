/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   max.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lalbe <lalbe@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/24 15:42:03 by lalbe             #+#    #+#             */
/*   Updated: 2025/06/24 15:45:47 by lalbe            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//Funcion para encontrar el numero mas alto dentro de una matriz (tab es la matriz)
int max(int *tab, unsigned int len)
{
    int result;
    unsigned int    i;

    if (len == 0)
        return (0);
    i = 0;
    result = tab[i];
    while (i < len)
    {
        if (result < tab[i])
            result = tab[i];
        i ++;
    }
    return (result);
    
}