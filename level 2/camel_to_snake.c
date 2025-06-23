/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   camel_to_snake.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lalbe <lalbe@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/17 17:31:40 by lalbe             #+#    #+#             */
/*   Updated: 2025/06/17 17:37:54 by lalbe            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//Convertir de camel a snake holaMuyBuenosDias a hola_muy_buenos_dias
#include <unistd.h>

int main(int argc, char **argv)
{
    int i;

    i = 0;

    if (argc == 2)
    {
        while (argv[1][i])
        {
            if (argv[1][i] >= 'A' && argv[1][i] <= 'Z')
            {
                write(1, "_", 1);
                argv[1][i] += 32;
            }
            write (1, &argv[1][i], 1);
            i ++;
        }
    }
    write(1, "\n", 1);
    return (0);
}