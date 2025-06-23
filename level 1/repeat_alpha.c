/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   repeat_alpha.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lalbe <lalbe@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/17 11:04:48 by lalbe             #+#    #+#             */
/*   Updated: 2025/06/17 16:18:39 by lalbe            ###   ########.fr       */
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

int main(int argc, char **argv)
{
    int i;

    i = 0;
    if (argc == 2)
        repeat_alpha(argv[1]);
    write(1, "\n",1);
    return (0);
}