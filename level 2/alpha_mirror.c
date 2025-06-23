/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   alpha_mirror.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lalbe <lalbe@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/17 16:16:26 by lalbe             #+#    #+#             */
/*   Updated: 2025/06/17 16:31:05 by lalbe            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//Escribe un string pero reemplaza cada letra por su letra opuesta en el abecedario segun su indice

#include <unistd.h>

int main(int argc, char **argv)
{
    int i;

    i = 0;
    
    if (argc == 2)
    {
        while (argv[1][i])
        {
            if (argv[1][i] >= 'a' && argv[1][i] <= 'z')
                argv[1][i] = ('a' + 'z' - argv[1][i]);
            else if (argv[1][i] >= 'A' && argv[1][i] <= 'Z')
                argv[1][i] = ('A' + 'Z' - argv[1][i]);
            write(1, &argv[1][i], 1);
            i ++;
        }
    }
    write(1, "\n", 1);
    return (0);
}