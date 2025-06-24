/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap_bits.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lalbe <lalbe@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/24 16:52:05 by lalbe             #+#    #+#             */
/*   Updated: 2025/06/24 16:53:27 by lalbe            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//Funcion que recibe un byte, intercambie sus mitades y devuelva el resultado

unsigned char   swap_bits(unsigned char octet)
{
    return ((octet >> 4) | (octet << 4));
}

//Avanzamos 4 bits a la derecha y 4 bits a la izquierda para obtener la mitad e intercambiarlos