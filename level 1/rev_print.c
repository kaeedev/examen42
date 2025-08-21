/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rev_print.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luviso-p <luviso-p@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/17 11:25:06 by lalbe             #+#    #+#             */
/*   Updated: 2025/08/21 12:08:05 by luviso-p         ###   ########.fr       */
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