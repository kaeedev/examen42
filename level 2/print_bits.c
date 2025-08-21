/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_bits.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luviso-p <luviso-p@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/24 15:47:42 by lalbe             #+#    #+#             */
/*   Updated: 2025/08/21 12:04:48 by luviso-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//Funcion que recibe un byte y lo printea en binario sin salto de linea al final. Octet es un conjunto de 8 bits
void    print_bits(unsigned char octet)
{
    unsigned char mask = 0x80;

    while (mask > 0) 
    {
        if (octet & mask)
            write(1, "1", 1);
        else
            write(1, "0", 1);
        mask >>= 1;
    }
}
