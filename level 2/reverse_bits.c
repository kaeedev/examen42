/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_bits.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luviso-p <luviso-p@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/24 16:02:18 by lalbe             #+#    #+#             */
/*   Updated: 2025/08/21 12:04:21 by luviso-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//Funcion que recibe un byte y lo invierte bit a bit. Devuelve el resultado

unsigned char   reverse_bits(unsigned char octet)
{
    int i;
    unsigned char   res;

    i = 8;
    res = 0;
    while (i > 0)
    {
        res = (res << 1) | (octet & 1); 
        octet >>= 1; 
        i --;
    }
    return (res);
}