/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strlen.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lalbe <lalbe@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/17 10:50:59 by lalbe             #+#    #+#             */
/*   Updated: 2025/06/17 16:20:17 by lalbe            ###   ########.fr       */
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

int main(void)
{
    int length = ft_strlen("Hola");
    printf("%d\n", length);
    return (0);
}