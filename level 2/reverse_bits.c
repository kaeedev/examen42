/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_bits.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lalbe <lalbe@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/24 16:02:18 by lalbe             #+#    #+#             */
/*   Updated: 2025/06/24 16:06:59 by lalbe            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//Funcion que recibe un byte y lo invierte bit a bit. Devuelve el resultado

unsigned char   reverse_bits(unsigned char octet)
{
    int i;
    unsigned char   res;

    i = 8; //Porque un byte tiene 8 bits
    res = 0; //Para ir almacenanddo el resultado invertido
    while (i > 0)
    {
        res = (res << 1) | (octet & 1); //Mueve los bits de res a la izquierda y obtenemos el bit mas a la derecha de octet. Añadimos ese bit al final de res
        octet >>= 1; //Mueve los bits de octet a la derecha
        i --;
    }
    return (res); //Contiene los bits de octet pero en orden inverso
}