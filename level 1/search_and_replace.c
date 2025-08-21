/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   search_and_replace.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luviso-p <luviso-p@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/17 12:54:56 by lalbe             #+#    #+#             */
/*   Updated: 2025/08/21 12:08:00 by luviso-p         ###   ########.fr       */
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
