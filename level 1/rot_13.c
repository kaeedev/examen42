/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rot_13.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lalbe <lalbe@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/17 12:13:10 by lalbe             #+#    #+#             */
/*   Updated: 2025/06/17 16:19:13 by lalbe            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//Escribe un string pero le suma 13 a la letra que corresponda
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
                argv[1][i] = (argv[1][i] - 'a' + 13) % 26 + 'a';
            else if (argv[1][i] >= 'A' && argv[1][i] <= 'Z')
                argv[1][i] = (argv[1][i] - 'A' + 13) % 26 + 'A';
            write(1, &argv[1][i], 1);
            i ++;
        }
    }
    write(1, "\n", 1);
    return (0);
}