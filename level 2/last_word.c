/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   last_word.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lalbe <lalbe@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/24 14:30:32 by lalbe             #+#    #+#             */
/*   Updated: 2025/06/24 15:41:44 by lalbe            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//Funcion para escribir la ultima palabra de un string
#include <unistd.h>

int main(int argc, char **argv)
{
    int i;
    int j;
    
    i = 0;
    j = 0;
    if (argc == 2)
    {
        while(argv[1][i])
        {
            if (argv[1][i] == ' ' && argv[1][i + 1] >= 33 && argv[1][i + 1] <= 126)
                j = i + 1;
            i ++;
        }
        while(argv[1][j] >= 33 && argv[1][j] <= 126)
        {
            write(1, &argv[1][j], 1);
            j++;
        }
        write(1, "\n", 1);
    }
}