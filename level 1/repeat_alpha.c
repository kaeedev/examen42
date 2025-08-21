/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   repeat_alpha.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luviso-p <luviso-p@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/17 11:04:48 by lalbe             #+#    #+#             */
/*   Updated: 2025/08/21 12:08:11 by luviso-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//Escribir un string pero cada letra se repite tantas veces como su indice en el abecedario
#include <unistd.h>

void ft_putchar(char c, int n)
{
    while (n > 0)
    {
        write(1, &c, 1);
        n --;
    }
}

void repeat_alpha(char *str)
{
    while (*str)
    {
        if (*str >= 'a' && *str <= 'z')
            ft_putchar(*str, *str - 'a' + 1);
        else if (*str >= 'A' && *str <= 'Z')
            ft_putchar(*str, *str - 'A' + 1);
        else
            write(1, str, 1);
        str++;
    }
}