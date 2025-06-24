/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   wdmatch.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lalbe <lalbe@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/24 17:08:55 by lalbe             #+#    #+#             */
/*   Updated: 2025/06/24 17:18:21 by lalbe            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//Prograna q recibe dos cadenas y verifica si es posible escribir la primera cadena 
//utilizando caracteres de la segunda respetando el orden en el que aparecen esos caracteres en la segunda cadena
//si es posible el programa muestra la cadena, sino muestra un salto de linea
void    ft_putstr(char *str)
{
    while (*str)
    {
        write (1, str, 1);
        str ++;
    }
}

int wdmatch(char *s1, char *s2)
{
    while (*s1 && *s2)
    {
        if (*s1 == *s2)
            s1 ++;
        s2 ++;
    }
    return (!*s1);
}

int main(int argc, char **argv)
{
    if (argc == 3)
    {
        if (wdmatch(argv[1], argv[2]))
            ft_putstr(argv[1]);
    }
    write(1, "\n", 1);
    return (0);
}