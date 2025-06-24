/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   union.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lalbe <lalbe@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/24 16:58:12 by lalbe             #+#    #+#             */
/*   Updated: 2025/06/24 17:08:19 by lalbe            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//Programa q recibe dos cadenas y muestre sin duplicados los caracteres q aparecen en una o ambas cadenas
#include <unistd.h>
int has_char(char *str, char c)
{
    while (*str)
    {
        if (*str == c)
            return (1);
        str ++;
    }
    return (0);
}

void    union_str(char *str1, char *str2)
{
    char save[256] = {0};
    int i;

    i = 0;
    while (*str1)
    {
        if (!has_char(save, *str1))
        {
            save[i] = *str1;
            write(1, str1, 1);
            i ++;
        }
        str1 ++;
    }
    while (*str2)
    {
        if (!has_char(save, *str2))
        {
            save[i] = *str2;
            write(1, str2, 1);
            i ++;
        }
        str2 ++;
    }
}

int main( int argc, char **argv)
{
    if (argc == 3)
        union_str(argv[1], argv[2]);
    write(1, "\n", 1);
}