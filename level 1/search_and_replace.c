/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   search_and_replace.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lalbe <lalbe@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/17 12:54:56 by lalbe             #+#    #+#             */
/*   Updated: 2025/06/17 16:19:56 by lalbe            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//Escribe un string pero reemplazamos una letra de ese string por lo que busquemos
#include <unistd.h>

void search_and_replace(char *str, char *search, char *replace)
{
    while (*str)
    {
        if (*str == *search)
            write(1, replace, 1);
        else
            write(1, str, 1);
        str ++;
    }
}

int main (int argc, char **argv)
{
    if (argc == 4)
        search_and_replace(argv[1], argv[2], argv[3]);
    write(1, "\n", 1);
    return (0);
}