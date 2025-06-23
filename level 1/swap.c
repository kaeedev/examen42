/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lalbe <lalbe@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/17 10:56:12 by lalbe             #+#    #+#             */
/*   Updated: 2025/06/17 16:20:25 by lalbe            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//Hacer un swap de datos
#include <stdio.h>

void    *ft_swap(int *a, int *b)
{
    int swap;

    swap = *a;
    *a = *b;
    *b = swap;
}

int main(void)
{
    int x = 4;
    int y = 9;
    printf("Antes del swap: x = %d, y = %d\n", x, y);
    ft_swap(&x, &y);
    printf("Después del swap: x = %d, y = %d\n", x, y);
    return (0);
}