/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotone.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lalbe <lalbe@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/17 12:45:51 by lalbe             #+#    #+#             */
/*   Updated: 2025/06/17 16:19:29 by lalbe            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//Escribe un string pero le sumamos 1 a la letra que toque
#include <unistd.h>

int main(int argc, char **argv)
{
    int i;

    i = 0;
    if (argc > 1)
    {
        while (argv[1][i])
        {
            if (argv[1][i] >= 'a' && argv[1][i] <= 'z')
                argv[1][i] = (argv[1][i] - 'a' + 1) % 26 + 'a'; //% 26 para asegurarnos de q se mantiene en las 26 letras del
            else if (argv[1][i] >= 'A' && argv[1][i] <= 'Z') //abecedario y que al llegar a la z vuelva a la a
                argv[1][i] = (argv[1][i] - 'A' + 1) % 26 + 'A';
            write(1, &argv[1][i], 1);
            i ++;
        }
    }
    write(1, "\n", 1);
    return (0);
}