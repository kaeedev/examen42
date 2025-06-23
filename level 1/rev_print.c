/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rev_print.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lalbe <lalbe@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/17 11:25:06 by lalbe             #+#    #+#             */
/*   Updated: 2025/06/17 16:18:53 by lalbe            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//Escribe un string de forma inversa
#include <unistd.h>

void rev_print(char *str)
{
    int i;
    
    i = 0;
    while(str[i])
        i ++;
    i --;
    while(i >= 0)
    {
        write(1, &str[i], 1);
        i --;
    }
}

int main(int argc, char **argv)
{
    if (argc == 2)
        rev_print(argv[1]);
    write(1, "\n", 1);
    return (0);
}