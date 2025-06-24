/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_bits.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lalbe <lalbe@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/24 15:47:42 by lalbe             #+#    #+#             */
/*   Updated: 2025/06/24 16:00:12 by lalbe            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//Funcion que recibe un byte y lo printea en binario sin salto de linea al final. Octet es un conjunto de 8 bits
void    print_bits(unsigned char octet)
{
    unsigned char mask = 0x80; //esto es el numero 10000000 en binario
    
    while (mask > 0) //se repetirá 8 veces
    {
        if (octet & mask)
            write(1, "1", 1);
        else
            write(1, "0", 1);
        mask >>= 1; //avanzamos la mascara. Es como un contador pero para binario
    }
}
