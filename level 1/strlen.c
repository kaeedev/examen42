/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strlen.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luviso-p <luviso-p@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/17 10:50:59 by lalbe             #+#    #+#             */
/*   Updated: 2025/08/21 12:07:46 by luviso-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//Mostrar la longitud de algo
#include <stdio.h>

int ft_strlen(char *str)
{
    int length;

    length = 0;
    while(*str)
    {
        str++;
        length++;
    }
    return (length);
}
